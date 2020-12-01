#include <iostream>

#include "TFile.h"
#include "TTree.h"
#include "TDOMParser.h"
#include "TXMLDocument.h"
#include "TXMLNode.h"
#include "TXMLAttr.h"

#include "getTimingClass.h"
#include "getTimingClassMC.h"
//#include "xmlTools.cxx"
#include "MsgLog.h"
using namespace std;

#define MAX_NUMBER_OF_FILTERS 30

bool checkNodeXMLElementNode(TXMLNode**  node_ptr){
   if ( (*node_ptr)->GetNodeType() != TXMLNode::kXMLElementNode ){
      (*node_ptr) = (*node_ptr)->GetNextNode();
      return false;
   }
   return true;
}

std::map<std::string, std::string> GetAttributeMap(TXMLNode* node)
{
  std::map<std::string, std::string> attr_map;

  TList* alist=node->GetAttributes();
  for (Int_t i=0; i< alist->GetSize();i++) {
    TXMLAttr* attr=dynamic_cast<TXMLAttr*> (alist->At(i));
    attr_map[attr->GetName()] = attr->GetValue();
  }
  return attr_map;
}


int main(int argc, char** argv){
   string settingFileName = "settings.xml";
   string settingName = "";
   if (argc<2){
      cout << "Please do:\n./calculateTiming [SETTING_NAME] (SETTING_FILE_NAME)\nwhere SETTING_NAME is the name in settings.xml" << endl; 
      exit(1);
   }
   else if(argc==2){
      settingName     = argv[1];
      settingFileName = "settings.xml";
   }
   else if(argc==3){
      settingName     = argv[1];
      settingFileName = argv[2];
   }
   else{
      cout << "Please do:\n./calculateTiming [SETTING_NAME] (SETTING_FILE_NAME)\nwhere SETTING_NAME is the name in settings.xml" << endl; 
      exit(1);
   }


   MsgLog::SetPrintType(MsgLog::kInfo, false);
   MsgLog::SetPrintPrefix(MsgLog::kInfo, false);

	TDOMParser xmlparser;
	xmlparser.SetValidate(false);
	xmlparser.ParseFile(settingFileName.c_str());
	TXMLDocument* doc   = xmlparser.GetXMLDocument();
	TXMLNode* root_node = doc->GetRootNode();
	string    node_name = root_node->GetNodeName();
	if (node_name != "settings_getTiming") {
   	cout << settingFileName << " does not have a settings_getTiming root node"<<endl;
   	cout << root_node->GetNodeName() << endl;
   	cout << "Skipping... "<<endl;
   	exit (1);
	}
	TXMLNode* node = root_node->GetChildren();
   map<string, string> mapSettings;
	while (node) {
   	if(checkNodeXMLElementNode(&node)==false) continue;
   	node_name=string(node->GetNodeName());
   	if(node_name=="job") {
   		mapSettings = GetAttributeMap(node);
         if(mapSettings["name"] == settingName){
            break;
         }
		}
   	node = node->GetNextNode();
   }

   // Check whether it has basic input
   vector<string> basicSettingNames = {"name", "inputPath", "particleName", "timingCorrection", "MCMode"};
   for(auto const& basicSettingName: basicSettingNames){
      if(mapSettings.count(basicSettingName)!=1)
         MsgFatal("No " + basicSettingName + " is set in settings!")
   }
   if(mapSettings.count("verbosity")==1)//here adjust what goes to the log..
      MsgLog::SetGlobalLogLevel(static_cast<MsgLog::EType>(stoi(mapSettings["verbosity"])));
   if(mapSettings.count("logFileName")==1){
      MsgLog::SetFileOutput(mapSettings["logFileName"].c_str());
   }

   MsgDebug(1, "Initializing TChain");
   MsgInfo("InputPath = " + mapSettings["inputPath"]);
	TChain* T = new TChain("MiniBooNE");
   T->Add(mapSettings["inputPath"].c_str());
   int MCMode = stoi(mapSettings["MCMode"]);


   MsgLog::Flush();
   if(MCMode == 0){
      MsgDebug(1, "Data Mode");
      getTimingClass* myClass = new getTimingClass(T);
      myClass->SetParticleMode(mapSettings["particleName"]);
      myClass->SetUseFiber(stoi(mapSettings["usefiber"]));
      if(mapSettings.count("outputFileName")==1) myClass->SetOutputFileName(mapSettings["outputFileName"]);
      if(mapSettings.count("majorfiber")==1)     myClass->SetMajorFiber(stoi(mapSettings["majorfiber"]));
      if(mapSettings["timingCorrection"]!="")    myClass->SetTimingCorrection(mapSettings["timingCorrection"]);
      for(int ifil = 1; ifil < MAX_NUMBER_OF_FILTERS; ifil++){
         string filterCountString = MsgLog::Form("filter%d", ifil);
         if(mapSettings.count(filterCountString)==1){
            myClass->AddFilter(mapSettings[filterCountString]);
         }
      }

      myClass->Begin(T);
      myClass->Init(T);
      myClass->Loop();
      myClass->Terminate();
      delete myClass;
      myClass = 0;
      MsgDebug(1, "myClass is deleted" );
   }


   else{
      MsgDebug(1, "MC Mode");
      getTimingClassMC* myClass = new getTimingClassMC(T);
      myClass->SetParticleMode(mapSettings["particleName"]);
      if(mapSettings.count("usefiber")==1) myClass->SetUseFiber(stoi(mapSettings["usefiber"]));
      if(mapSettings.count("cutdirt")==1) myClass->SetCutDirt(stoi(mapSettings["cutdirt"]));
      myClass->SetQuiet(true);
      if(mapSettings.count("outputFileName")==1) myClass->SetOutputFileName(mapSettings["outputFileName"]);
      if(mapSettings["timingCorrection"]!="")    myClass->SetTimingCorrection(mapSettings["timingCorrection"]);
      for(int ifil = 1; ifil < 20; ifil++){
         string filterCountString = MsgLog::Form("filter%d", ifil);
         if(mapSettings.count(filterCountString)==1){
            myClass->AddFilter(mapSettings[filterCountString]);
         }
      }


      myClass->Begin(T);
      myClass->Init(T);
      myClass->Loop();
      myClass->Terminate();
      delete myClass;
      myClass = 0;
      MsgDebug(1, "myClass is deleted" );
   }
   MsgInfo("Deleting TChain");
   delete T;
   T = 0;
   return 0;

}

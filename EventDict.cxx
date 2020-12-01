// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EventDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "MonteCarloBEAMChunkExt.h"
#include "MonteCarloEVNTChunkExt.h"
#include "OneTrackChunkExt.h"
#include "TwoTrackChunkExt.h"
#include "MsgLog.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_MonteCarloBEAMChunkExt(void *p = 0);
   static void *newArray_MonteCarloBEAMChunkExt(Long_t size, void *p);
   static void delete_MonteCarloBEAMChunkExt(void *p);
   static void deleteArray_MonteCarloBEAMChunkExt(void *p);
   static void destruct_MonteCarloBEAMChunkExt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MonteCarloBEAMChunkExt*)
   {
      ::MonteCarloBEAMChunkExt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MonteCarloBEAMChunkExt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MonteCarloBEAMChunkExt", ::MonteCarloBEAMChunkExt::Class_Version(), "MonteCarloBEAMChunkExt.h", 18,
                  typeid(::MonteCarloBEAMChunkExt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MonteCarloBEAMChunkExt::Dictionary, isa_proxy, 4,
                  sizeof(::MonteCarloBEAMChunkExt) );
      instance.SetNew(&new_MonteCarloBEAMChunkExt);
      instance.SetNewArray(&newArray_MonteCarloBEAMChunkExt);
      instance.SetDelete(&delete_MonteCarloBEAMChunkExt);
      instance.SetDeleteArray(&deleteArray_MonteCarloBEAMChunkExt);
      instance.SetDestructor(&destruct_MonteCarloBEAMChunkExt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MonteCarloBEAMChunkExt*)
   {
      return GenerateInitInstanceLocal((::MonteCarloBEAMChunkExt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MonteCarloBEAMChunkExt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MonteCarloEVNTChunkExt(void *p = 0);
   static void *newArray_MonteCarloEVNTChunkExt(Long_t size, void *p);
   static void delete_MonteCarloEVNTChunkExt(void *p);
   static void deleteArray_MonteCarloEVNTChunkExt(void *p);
   static void destruct_MonteCarloEVNTChunkExt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MonteCarloEVNTChunkExt*)
   {
      ::MonteCarloEVNTChunkExt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MonteCarloEVNTChunkExt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MonteCarloEVNTChunkExt", ::MonteCarloEVNTChunkExt::Class_Version(), "MonteCarloEVNTChunkExt.h", 22,
                  typeid(::MonteCarloEVNTChunkExt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MonteCarloEVNTChunkExt::Dictionary, isa_proxy, 4,
                  sizeof(::MonteCarloEVNTChunkExt) );
      instance.SetNew(&new_MonteCarloEVNTChunkExt);
      instance.SetNewArray(&newArray_MonteCarloEVNTChunkExt);
      instance.SetDelete(&delete_MonteCarloEVNTChunkExt);
      instance.SetDeleteArray(&deleteArray_MonteCarloEVNTChunkExt);
      instance.SetDestructor(&destruct_MonteCarloEVNTChunkExt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MonteCarloEVNTChunkExt*)
   {
      return GenerateInitInstanceLocal((::MonteCarloEVNTChunkExt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MonteCarloEVNTChunkExt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_OneTrackChunkExt(void *p = 0);
   static void *newArray_OneTrackChunkExt(Long_t size, void *p);
   static void delete_OneTrackChunkExt(void *p);
   static void deleteArray_OneTrackChunkExt(void *p);
   static void destruct_OneTrackChunkExt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::OneTrackChunkExt*)
   {
      ::OneTrackChunkExt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::OneTrackChunkExt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("OneTrackChunkExt", ::OneTrackChunkExt::Class_Version(), "OneTrackChunkExt.h", 12,
                  typeid(::OneTrackChunkExt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::OneTrackChunkExt::Dictionary, isa_proxy, 4,
                  sizeof(::OneTrackChunkExt) );
      instance.SetNew(&new_OneTrackChunkExt);
      instance.SetNewArray(&newArray_OneTrackChunkExt);
      instance.SetDelete(&delete_OneTrackChunkExt);
      instance.SetDeleteArray(&deleteArray_OneTrackChunkExt);
      instance.SetDestructor(&destruct_OneTrackChunkExt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::OneTrackChunkExt*)
   {
      return GenerateInitInstanceLocal((::OneTrackChunkExt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::OneTrackChunkExt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TwoTrackChunkExt(void *p = 0);
   static void *newArray_TwoTrackChunkExt(Long_t size, void *p);
   static void delete_TwoTrackChunkExt(void *p);
   static void deleteArray_TwoTrackChunkExt(void *p);
   static void destruct_TwoTrackChunkExt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TwoTrackChunkExt*)
   {
      ::TwoTrackChunkExt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TwoTrackChunkExt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TwoTrackChunkExt", ::TwoTrackChunkExt::Class_Version(), "TwoTrackChunkExt.h", 13,
                  typeid(::TwoTrackChunkExt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TwoTrackChunkExt::Dictionary, isa_proxy, 4,
                  sizeof(::TwoTrackChunkExt) );
      instance.SetNew(&new_TwoTrackChunkExt);
      instance.SetNewArray(&newArray_TwoTrackChunkExt);
      instance.SetDelete(&delete_TwoTrackChunkExt);
      instance.SetDeleteArray(&deleteArray_TwoTrackChunkExt);
      instance.SetDestructor(&destruct_TwoTrackChunkExt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TwoTrackChunkExt*)
   {
      return GenerateInitInstanceLocal((::TwoTrackChunkExt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TwoTrackChunkExt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *MsgLog_Dictionary();
   static void MsgLog_TClassManip(TClass*);
   static void *new_MsgLog(void *p = 0);
   static void *newArray_MsgLog(Long_t size, void *p);
   static void delete_MsgLog(void *p);
   static void deleteArray_MsgLog(void *p);
   static void destruct_MsgLog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MsgLog*)
   {
      ::MsgLog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MsgLog));
      static ::ROOT::TGenericClassInfo 
         instance("MsgLog", "MsgLog.h", 19,
                  typeid(::MsgLog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MsgLog_Dictionary, isa_proxy, 4,
                  sizeof(::MsgLog) );
      instance.SetNew(&new_MsgLog);
      instance.SetNewArray(&newArray_MsgLog);
      instance.SetDelete(&delete_MsgLog);
      instance.SetDeleteArray(&deleteArray_MsgLog);
      instance.SetDestructor(&destruct_MsgLog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MsgLog*)
   {
      return GenerateInitInstanceLocal((::MsgLog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MsgLog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MsgLog_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MsgLog*)0x0)->GetClass();
      MsgLog_TClassManip(theClass);
   return theClass;
   }

   static void MsgLog_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MonteCarloBEAMChunkExt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MonteCarloBEAMChunkExt::Class_Name()
{
   return "MonteCarloBEAMChunkExt";
}

//______________________________________________________________________________
const char *MonteCarloBEAMChunkExt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MonteCarloBEAMChunkExt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MonteCarloBEAMChunkExt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MonteCarloBEAMChunkExt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MonteCarloBEAMChunkExt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MonteCarloBEAMChunkExt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MonteCarloBEAMChunkExt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MonteCarloBEAMChunkExt*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MonteCarloEVNTChunkExt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MonteCarloEVNTChunkExt::Class_Name()
{
   return "MonteCarloEVNTChunkExt";
}

//______________________________________________________________________________
const char *MonteCarloEVNTChunkExt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MonteCarloEVNTChunkExt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MonteCarloEVNTChunkExt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MonteCarloEVNTChunkExt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MonteCarloEVNTChunkExt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MonteCarloEVNTChunkExt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MonteCarloEVNTChunkExt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MonteCarloEVNTChunkExt*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr OneTrackChunkExt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *OneTrackChunkExt::Class_Name()
{
   return "OneTrackChunkExt";
}

//______________________________________________________________________________
const char *OneTrackChunkExt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OneTrackChunkExt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int OneTrackChunkExt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::OneTrackChunkExt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *OneTrackChunkExt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OneTrackChunkExt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *OneTrackChunkExt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::OneTrackChunkExt*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TwoTrackChunkExt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TwoTrackChunkExt::Class_Name()
{
   return "TwoTrackChunkExt";
}

//______________________________________________________________________________
const char *TwoTrackChunkExt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TwoTrackChunkExt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TwoTrackChunkExt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TwoTrackChunkExt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TwoTrackChunkExt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TwoTrackChunkExt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TwoTrackChunkExt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TwoTrackChunkExt*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MonteCarloBEAMChunkExt::Streamer(TBuffer &R__b)
{
   // Stream an object of class MonteCarloBEAMChunkExt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MonteCarloBEAMChunkExt::Class(),this);
   } else {
      R__b.WriteClassBuffer(MonteCarloBEAMChunkExt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MonteCarloBEAMChunkExt(void *p) {
      return  p ? new(p) ::MonteCarloBEAMChunkExt : new ::MonteCarloBEAMChunkExt;
   }
   static void *newArray_MonteCarloBEAMChunkExt(Long_t nElements, void *p) {
      return p ? new(p) ::MonteCarloBEAMChunkExt[nElements] : new ::MonteCarloBEAMChunkExt[nElements];
   }
   // Wrapper around operator delete
   static void delete_MonteCarloBEAMChunkExt(void *p) {
      delete ((::MonteCarloBEAMChunkExt*)p);
   }
   static void deleteArray_MonteCarloBEAMChunkExt(void *p) {
      delete [] ((::MonteCarloBEAMChunkExt*)p);
   }
   static void destruct_MonteCarloBEAMChunkExt(void *p) {
      typedef ::MonteCarloBEAMChunkExt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MonteCarloBEAMChunkExt

//______________________________________________________________________________
void MonteCarloEVNTChunkExt::Streamer(TBuffer &R__b)
{
   // Stream an object of class MonteCarloEVNTChunkExt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MonteCarloEVNTChunkExt::Class(),this);
   } else {
      R__b.WriteClassBuffer(MonteCarloEVNTChunkExt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MonteCarloEVNTChunkExt(void *p) {
      return  p ? new(p) ::MonteCarloEVNTChunkExt : new ::MonteCarloEVNTChunkExt;
   }
   static void *newArray_MonteCarloEVNTChunkExt(Long_t nElements, void *p) {
      return p ? new(p) ::MonteCarloEVNTChunkExt[nElements] : new ::MonteCarloEVNTChunkExt[nElements];
   }
   // Wrapper around operator delete
   static void delete_MonteCarloEVNTChunkExt(void *p) {
      delete ((::MonteCarloEVNTChunkExt*)p);
   }
   static void deleteArray_MonteCarloEVNTChunkExt(void *p) {
      delete [] ((::MonteCarloEVNTChunkExt*)p);
   }
   static void destruct_MonteCarloEVNTChunkExt(void *p) {
      typedef ::MonteCarloEVNTChunkExt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MonteCarloEVNTChunkExt

//______________________________________________________________________________
void OneTrackChunkExt::Streamer(TBuffer &R__b)
{
   // Stream an object of class OneTrackChunkExt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(OneTrackChunkExt::Class(),this);
   } else {
      R__b.WriteClassBuffer(OneTrackChunkExt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_OneTrackChunkExt(void *p) {
      return  p ? new(p) ::OneTrackChunkExt : new ::OneTrackChunkExt;
   }
   static void *newArray_OneTrackChunkExt(Long_t nElements, void *p) {
      return p ? new(p) ::OneTrackChunkExt[nElements] : new ::OneTrackChunkExt[nElements];
   }
   // Wrapper around operator delete
   static void delete_OneTrackChunkExt(void *p) {
      delete ((::OneTrackChunkExt*)p);
   }
   static void deleteArray_OneTrackChunkExt(void *p) {
      delete [] ((::OneTrackChunkExt*)p);
   }
   static void destruct_OneTrackChunkExt(void *p) {
      typedef ::OneTrackChunkExt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::OneTrackChunkExt

//______________________________________________________________________________
void TwoTrackChunkExt::Streamer(TBuffer &R__b)
{
   // Stream an object of class TwoTrackChunkExt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TwoTrackChunkExt::Class(),this);
   } else {
      R__b.WriteClassBuffer(TwoTrackChunkExt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TwoTrackChunkExt(void *p) {
      return  p ? new(p) ::TwoTrackChunkExt : new ::TwoTrackChunkExt;
   }
   static void *newArray_TwoTrackChunkExt(Long_t nElements, void *p) {
      return p ? new(p) ::TwoTrackChunkExt[nElements] : new ::TwoTrackChunkExt[nElements];
   }
   // Wrapper around operator delete
   static void delete_TwoTrackChunkExt(void *p) {
      delete ((::TwoTrackChunkExt*)p);
   }
   static void deleteArray_TwoTrackChunkExt(void *p) {
      delete [] ((::TwoTrackChunkExt*)p);
   }
   static void destruct_TwoTrackChunkExt(void *p) {
      typedef ::TwoTrackChunkExt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TwoTrackChunkExt

namespace ROOT {
   // Wrappers around operator new
   static void *new_MsgLog(void *p) {
      return  p ? new(p) ::MsgLog : new ::MsgLog;
   }
   static void *newArray_MsgLog(Long_t nElements, void *p) {
      return p ? new(p) ::MsgLog[nElements] : new ::MsgLog[nElements];
   }
   // Wrapper around operator delete
   static void delete_MsgLog(void *p) {
      delete ((::MsgLog*)p);
   }
   static void deleteArray_MsgLog(void *p) {
      delete [] ((::MsgLog*)p);
   }
   static void destruct_MsgLog(void *p) {
      typedef ::MsgLog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MsgLog

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 214,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 214,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace {
  void TriggerDictionaryInitialization_EventDict_Impl() {
    static const char* headers[] = {
"MonteCarloBEAMChunkExt.h",
"MonteCarloEVNTChunkExt.h",
"OneTrackChunkExt.h",
"TwoTrackChunkExt.h",
"MsgLog.h",
0
    };
    static const char* includePaths[] = {
"/grid/fermiapp/products/larsoft/root/v6_12_04e/Linux64bit+2.6-2.12-e15-prof/include",
"/scratch/condor-tmp/klin/TimingTreeMaker/getTiming/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EventDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$MonteCarloBEAMChunkExt.h")))  MonteCarloBEAMChunkExt;
class __attribute__((annotate("$clingAutoload$MonteCarloEVNTChunkExt.h")))  MonteCarloEVNTChunkExt;
class __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$OneTrackChunkExt.h")))  OneTrackChunkExt;
class __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Simple event class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$TwoTrackChunkExt.h")))  TwoTrackChunkExt;
class __attribute__((annotate("$clingAutoload$MsgLog.h")))  MsgLog;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EventDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "MonteCarloBEAMChunkExt.h"
#include "MonteCarloEVNTChunkExt.h"
#include "OneTrackChunkExt.h"
#include "TwoTrackChunkExt.h"
#include "MsgLog.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MonteCarloBEAMChunkExt", payloadCode, "@",
"MonteCarloEVNTChunkExt", payloadCode, "@",
"MsgLog", payloadCode, "@",
"OneTrackChunkExt", payloadCode, "@",
"TwoTrackChunkExt", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EventDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EventDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EventDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EventDict() {
  TriggerDictionaryInitialization_EventDict_Impl();
}

import os, sys
fileNameOrg = sys.argv[1] # original .h file
fileNameNew = sys.argv[2] # new .h file

printNewKMax        = False
printNewDeclaration = True
printNewBranch      = False


valuesOrg = dict()
valuesNew = dict()

def is_number(s):
    try:
        int(s)
        return True
    except ValueError:
        pass
	return False

def getValue(fileName, values):
	f = open(fileName)
	lines = f.readlines()
	name =""
	number=-1
	for line in lines:
		if line.find("const Int_t kMax")<0: continue
		items = line.split()
		for item in items:
			item = item.replace(";","")
			if item.find("kMax")>=0:
				name = item
			elif is_number(item)==True:
				number = int(item)
		values[name] = number

getValue(fileNameOrg, valuesOrg)
getValue(fileNameNew, valuesNew)

print valuesOrg
print valuesNew

setOrg = set(valuesOrg.keys())
setNew = set(valuesNew.keys())

setAll = setOrg | setNew
print "Number of all keys are ", len(setAll)
print "Org has", len(setOrg), ", lacking", len(setAll-setOrg)
print "New has", len(setNew), ", lacking", len(setAll-setNew)

print "In new but not in Org: ", sorted(setNew-setOrg)
allKeys = sorted(setAll)


for key in allKeys:
	if (key not in setOrg) or (key not in setNew):
		continue
	valueOrg = valuesOrg[key]
	valueNew = valuesNew[key]
	if valueOrg<valueNew:
		print key, ": %d -> %d"%(valueOrg, valueNew)

print "\n\n"
for key in allKeys:
	valueOrg, valueNew = 0, 0
	if key in valuesOrg.keys():
		valueOrg = valuesOrg[key]
	if key in valuesNew.keys():
		valueNew = valuesNew[key]
	print "const Int_t", key, "=", max([valueOrg, valueNew]), ";"




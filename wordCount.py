import numpy as np

fo    = open("sample.txt", "r")
var1  = fo.read()
fo.close()


count = dict()
words = var1.split()


for word in words:
	if word in count:
		count[word] = count[word] + 1
	else:
		count[word] = 1

print ("Word 										Count")
print ("=================================================")    
for k, v in count.items():
    print("{0}                           {1}".format(k, v))

#45 open function
f = open('sample1.txt','r')#by default the mode is 'r
'''data = f.read()
datanew = f.read()# will read the first 5 characters of the file
print(data)'''

datanew = f.readline()
print(datanew)#print the first line

datanew = f.readline()
print(datanew)#print the second line
f.close()

#46 writing in a file
f=open('sample1.txt','w')
f.write('i am here')
f.write(', nice to meet you')

f.close()

#47 with statement(we dont need to write the close satement)
with open('sample1.txt','r') as f:
    a=f.read()
with open('sample1.txt','a') as f:
    a=f.write('\nhello')
print(a)
with open('sample1.txt','r') as f:
    a=f.read()  

if 'hello' in a: #48finding a word in file
    print('hello is present')
else:
    print('not present')  

words=['nice','hello'] #49replacing words in file
with open('sample1.txt','r') as f:
    a=f.read()  
for word in words:
    a=a.replace(word,'#####')  
with open('sample1.txt','w') as f:
    a=f.write(a)

#50creating the copy of a file
with open('sample1.txt') as f:
    a=f.read()
with open('sample2.txt','a') as f:
    a=f.write(a) 

#51renaming a file
import os
oldname='sample2.txt'
newname='bitches.txt'
with open(oldname) as f:
    a=f.read() 
with open('bitches.txt','w') as f:
    f.write(a)  
os.remove(oldname)      

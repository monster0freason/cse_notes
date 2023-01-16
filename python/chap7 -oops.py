#32 while loop
i=0
while i<4:
    print("yes"+str(i))
    i=i+1
print('done') 

fruits=['banana','mango','grapes','orange']
#33 for loop
for item in fruits:
    print(item)
#34 range function
for i in range(2,6,1):
    print(i)
else:
    print('none1') # can use else with both while and for loop

#35 break
for i in range(2,6,1):
    print(i)
    if i==3:
        break
else:
        print('none2')#here else will not work coz of break

#36 continue
for i in range(2,6,1):
    if i==3:
        continue
    print(i)
else:
        print('none3')

#37 pass(do nothing-null statement)  
i=4
if i>0:
    pass 

num=int(input('enter the number'))
for i in range(1,3):
    print(f'{num}X{i}={num*i}') #38 this is called f strings    
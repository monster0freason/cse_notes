#29 if else syntak
a=22
if(a>30):
    print('>than30')
elif(a>13):
    print('greater than 13')
else:#else is optional
    print('<than 3')   

#30 in or is 
a=None    
if(a is None ):
    print('yes')
else:
    print('no') 

b=[45,22,345,1]     
print(1 in b)  

#31 spam or not
text=input('enter the text')
if('buy now' in text):
    spam=True
elif('subscribe this' in text):
    spam=True
else:
    spam=False

if(spam):
    print('this is spam')
else:
    print('not a spam')                
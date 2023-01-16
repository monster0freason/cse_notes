#24 dictionary(it is unordered,cab be updated,it is indexed,cannot keep duplicates)
dict={
    'fast':'in a quick manner',
    'ankit':'my name',
    'marks':[1,2,5],
    'dict2':{'ronaldo': 'NUMBER 7',}
}
print(dict['fast'])
print(dict['dict2']['ronaldo']) # can make a dictionary inside a dictionary

#25 dictionary methods
print(dict.keys()) # will print all the keys

updatedict={
    'cat':'useless animal','dog':'loyal'
}
dict.update(updatedict)
print(dict) # updates the dictionary

print('ITEMS' ,dict.items()) #will show all the items

#26 get function
print(dict.get('ankit2')) # returns none as harry is not present
#print(dict['ankit2']) #throw an error


#27 sets(collection of non repetitive elements)-unordered,unindexed,cant change items,no duplicates
a={1,3,4,5,1}
print(a)

b={}
print(type(b)) #this will create an empty dictionary and not a set.

c=set()#empty set
print(type(c))
c.add(4)
c.add(33)
c.add(12)
c.add((2,5,7))
print(c)

#28 operation in sets
print(len(c))#prints length
c.remove(12)#removes element
print(c)
print(c.pop())#pop out any random  element
print(c)

s={18,'18',18.1}
#both the 18 will be considered different
print(s)

fevlang={}
d=input("enter your fev lang\n")
fevlang['ankit']=d# this is how you take input in a dictionary
print(fevlang.items())




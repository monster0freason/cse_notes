print('ankit qouted,"hello"')
#10 use single quote if you have double quote in your string and vice versa

a="good morning, "
name="ankit"
c=a+name
print(c) #11 concatenating two strings (name[3]="d"--> does not work)

print(name[1:4]) #12 string slicing (print from index 1 to 3)

print(name[0:4:2]) #13 slicing with skip value(will print one and skip one....)

story='once upon a time there was a footballer named ankit who played for india'#14 string functions
print(len(story)) 
print(story.endswith("notes")) 
print(story.count('a'))
print(story.capitalize())#will capitilize the first char of the string
print(story.find('ankit'))
print(story.replace('ankit','ronaldo'))

 #15 escape sequence character \n-new line , \t-tab , \'-single quote , \\-backslash

#16 customized letter
letter='''dear <NAME>,
Greeting from abc house . i am happy to tell you about your selection 
you aew selected!
have a great day ahead!
thanks and regards,
bill
date: <DATE>
'''
name=input('enter your name : \n')
date=input('enter date : \n')
letter=letter.replace("<NAME>",name)
letter=letter.replace("<DATE>",date)
print(letter)








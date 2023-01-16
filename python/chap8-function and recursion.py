#39 function 
def greet(name='stranger'):
    print('good day '+name)

greet('ankit') 
greet() #40 here stranger is default parameter value - this value is used when no argument is passed 

#41 recursion 
def factorial_iter(n):
    product=1
    for i in range(n):
        product=product*(i+1)
    return product

f=factorial_iter(5) 
print(f)       

def factorial_recur(n):
    if n==1 or n==0 :
        return 1
    return n* factorial_recur(n-1) 
f=factorial_recur(5)
print(f)  

#42 end=" " will prevent the new line character after every print
print('hello,', end=" ")
print('how', end=" ")
print('are', end=" ")
print('you', end=" ")

#43 strip-removes all the extra spaces
this='    ankit is king     '
print(this)
print(this.strip())

#44 random.randint - will choose any random number in range
import random
randno=random.randint(1,3)
print(randno)
#52 PascalCase--> first and middle letter is capital , camelCase-->first is small and middle is capital letter,classes are usually in PascalCase

#53 class 
class number:
    def sum(self):
        return self.a+self.b

num=number() #object instatenious
num.a=12
num.b=34
s=num.sum()
print(s)

class Employee:
    company='google'#class attribute , instance attribue-->attribute that belongs to the object
    salary=100

    @staticmethod #55 is called a decorator which modifies the function(here we dont need to use self)
    def greet():
        print('good morning,sir')

ankit=Employee()
nehal=Employee()
ankit.salary=1000 #instance attribute
nehal.salary=200
print(ankit.company)
print(nehal.company)
Employee.company='youtube'
print(ankit.company)
print(nehal.company)
print(ankit.salary)
print(nehal.salary)
#54 instance attribute is fevoured over class attribute.
print(ankit.greet())


class Employee1:
    company='google'
    salary=100

    @staticmethod 
    def greet():
        print('good morning,sir')

    def __init__(self,name,salary,subunit):
        self.salary=salary
        self.name=name 
        self.subunit=subunit
        print('employee is created') 
        #56 here __imit__ is called constructor(it will run automatically) 
    def getdetails(self):
        print(f"the name of the employee is{ self.name}")
        print(f"the salary of the employee is{ self.salary}")
        print(f"the subunit of the employee is{ self.subunit}")

print(ankit.greet())
kabir=Employee1(' kabir', 10000,' youtube')
kabir.getdetails()






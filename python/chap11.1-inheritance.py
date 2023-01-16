#57 single inheritance--> is way of creating a new class from an existing class
class employee:#parent class
    company="google"

    def showdetails(self):
        print('this is an employee')
class programmer(employee): #58 child class-->programmer has employee's every attribute and method.
    language='python'

    def getlanguage(self):
        print(f'the language is {self.language}')
    def showdetails(self): #overriding employee's attribute
        print('this is an programmer')
e=employee()
e.showdetails()
p=programmer()
p.showdetails()

#59 multiple inheritance-->when the child class inherits from more than one parent class

class employee2:
    company='vise'
    ecode=120

class freelancer:
    company='fiverr'
    level=0

    def upgradelevel(self):
        self.level=self.level+1

class programmer(employee2,freelancer):
    name='ankit'  

p=programmer()
print(p.level)
print(p.company) #60 this will print visa coz we have written employee2 first in rogrammer class.

#61 mulilevel inheritance-
class person: #grandfather
    country='india'

    def takebreak(self):
        print('i am breathing....')
class employee3(person):#father
    company='honda'

    def takebreak(self):
        super().takebreak() #63 will run both its attribute and also his parents attribute
        print('i dont want to.....')

    def getsalary(self):
        print(f'salary is {self.salary}')

class programmer(employee3): #son
    company='fiverr'

    def getsalary(self):
        print(f"no salary")

p=person()
p.takebreak()
e=employee3() 
e.takebreak()
pr=programmer() 
pr.takebreak() #62 will use his fathers(nearest parent) attribute 


 




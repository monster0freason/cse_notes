class employee:
    company = 'camel'
    salary = 100
    location = 'delhi'

    def changesalary(self, sal):
        # self.salary=sal  #64 will not change the class attribute only create a instance attribute.

        self.__class__.salary = sal  # 65this will change the class attribute.

    # 66 is a decorator allows us to directly access the class attribute and change it.
    @classmethod
    def changesalaryagain(cls, sal):
        cls.salary = sal


e = employee()
print(e.salary)
e.changesalary(400)
print(e.salary)
e.changesalaryagain(500)
print(e.salary)


class employee2:
    company='bharat gas'
    salary=5600
    salarybonus=500
    
    @property #67 will convert this function into a property . also called @getter
    def totalsalary(self):
        return self.salary+self.salarybonus

    @totalsalary.setter #68 
    def totalsalary(self,val):
        self.salarybonus = val-self.salary   

a=employee2()
print(a.totalsalary)
a.totalsalary=5800
print(a.salary)
print(a.salarybonus)
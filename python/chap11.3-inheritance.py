class number:
    def __init__(self,num):
        self.num=num

    def __add__(self,num2):
        print('lets add')
        return self.num+num2.num 

        #70 these methods are given in python documentation (if u wanna add use __add__,substraction(__sub__),multiply(__mul__),divide(__freediv__),//(__floordiv__)

    def __mul__(self,num2): 
        print('lets muliply')
        return self.num*num2.num        

n1=number(4) #69 n1 and n2 are number objects now we have to define how to add these number objects by defining some special methods(__add__)
n2=number(6)
sum=n1+n2
print(sum)
mul=n1*n2
print(mul)        

#71 2d and 3d vectors
class c2dvec:
    def __init__(self,i,j):
      self.icap=i 
      self.jcap=j

    def __str__(self):
      return f"{self.icap}i + {self.jcap}j"  

class c3dvec(c2dvec):
    def __init__(self,i,j,k):
      super().__init__(i,j)
      self.kcap=k

    def __str__(self):
      return f"{self.icap}i + {self.jcap}j + {self.kcap}k"        

v2d=c2dvec(1,3)
v3d=c3dvec(1,9,7) 
print(v2d)
print(v3d)

#72 importing random number
import random
randnum=random.randint(1,100)
print(randnum)

userguess=int(input("enter your guess:"))
if(userguess==randnum):
    print('you guessed it right!')
else:
    print('you guessed it wrong!')    



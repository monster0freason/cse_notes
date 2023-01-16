from operator import itemgetter
records=[['a',1,'a1',[100,100,100]],['b',2,'b1',[99,99,99]],['c',3,'c1',[98,98,98]]]
rec=sorted(records,reverse=True,key=itemgetter(1))
print(rec)
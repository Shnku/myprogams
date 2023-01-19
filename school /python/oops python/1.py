# first oops concepts ...
class employee:
    def __init__(self, name, add, salary):
        self.name=name
        self.add=add #self.add এইসব na lekhar age porjonto uporer add bold hoyni ... pore holo
        self.salary=salary 

'''nicher agulo lekhar kono dorkar nei '''
# harry=employee()
# rohan=employee()
# harry.name='harry kaku'
# harry.add='chinsurah'
# harry.salary='34566'
# rohan.name='rohan mal'
# rohan.add='china'
# rohan.salary='44566'
# print(rohan.salary)

harry=employee('harry pal','chinsurah','45000')
rohan=employee('rohan das','kolkata','44666')

print(rohan.salary,harry.salary)

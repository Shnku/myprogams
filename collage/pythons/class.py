class person:
    def __init__(self, name, age, bg):
        self.name = name
        self.age = age
        self.bg = bg

    def disp(self):
        print('name= ', self.name)
        print('age= ', self.age)
        print()


p1 = person('shanku', 18, 'o+')
p1.disp()

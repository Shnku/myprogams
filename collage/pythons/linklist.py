class NODE:
    def __init__(self, data=None):
        self.val = data
        self.next = None

    def isempty(self):
        if self.val == None:
            return True
        else:
            return False

    def addend(self, dat):  # recursive
        if self.isempty():
            self.val = dat
            self.next = None
        elif self.next == None:
            temp = NODE(dat)
            self.next = temp
        else:
            self.next.addend(dat)

    def delend(self):
        if self.isempty():
            print("list is empty = ", self)
        elif self.next is None:
            self.val = None
        else:
            self.next.delend()

    def display(self):
        try:
            while self.val is not None:
                print(self.val)
                self = self.next
        except:
            pass

    # def __str__(self):
    #     self_list = []
    #     if self.val is None:
    #         return str(self_list)


# def main():

print("___link list in python___")
mylist = NODE()
while True:
    n = input("enter your choice: ")
    match n:
        case "1":
            val = input("enter list data: ")
            mylist.addend(val)
        case "2":
            mylist.delend()
        case "3":
            print("___d:display list___")
            mylist.display()
        case _:
            print("nothing")
            break


# if __name__ == "__main__":
#     main()


"""
output....


___link list in python___
enter your choice: 1
enter list data: 10
enter your choice: 3
___d:display list___
10
enter your choice: 2
enter your choice: 3
___d:display list___
enter your choice: 1
enter list data: 45
enter your choice: 1
enter list data: 25
enter your choice: 3
___d:display list___
45
25
enter your choice: 2
enter your choice: 3
___d:display list___
45
enter your choice: 1
enter list data: 56
enter your choice: 1
enter list data: 52
enter your choice: 3
___d:display list___
45
56
52
enter your choice: 000
nothing
"""

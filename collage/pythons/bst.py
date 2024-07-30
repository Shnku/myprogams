class Tree:
    def __init__(self, val=None):
        self.val = val
        self.leftchild = None
        self.rightchild = None

    def insert(self, val):
        if self == None:
            self.val = val
            self.leftchild = self.rightchild = None
        elif self.val > val:
            self.insert(self.rightchild, val)
        elif self.val < val:
            self.insert(self.leftchild, val)
        else:
            print("duplicate.")

    def inorder(self):
        self.inorder(self.leftchild)
        print(self.val)
        self.inorder(self.rightchild)

    def display(self):
        pass

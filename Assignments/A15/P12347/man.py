class Binary_Tree(object):
    
    def _initialize_instance_fields(self):
        self.__data = 0
        self.__left = None
        self.__right = None

    def __init__(self):
        self._initialize_instance_fields()

        self.__data = 0
        self.__left = None
        self.__right = None

    def __init__(self, value):
        self._initialize_instance_fields()

        self.__data = value
        self.__left = self.__right = None

    def Insert(self, root, value):
        if root is None:
            return Binary_Tree(value)
        if value > root.__data:
            root.__right = self.Insert(root.__right, value)
        else:
            root.__left = self.Insert(root.__left, value)
        return root


    def BuildTree(self, root):
        x = None
        cin >> x
        root = self.Insert(root, x)
        while cin >> x:
            self.Insert(root, x)
        return root

    def Postorder(self, root):
        if root != None:
            self.Postorder(root.__left)
            self.Postorder(root.__right)
            print(root.__data, end = '')
            print('\n', end = '')

class GlobalMembers(object):

    @staticmethod
    def main():
        obj = Binary_Tree()
        root = None
        root = obj.BuildTree(root)

        obj.Postorder(root)

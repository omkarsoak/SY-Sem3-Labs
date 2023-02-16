class student:
    def __init__(self,name,id,role):  #constructor
        self.name = name
        self.id = id
        self.role = role

    #method
    def printdetails(self):
        print("name is",self.name)
        print("id is",self.id)
        print("role is",self.role)

    #class methods
    def change_role(cls,new_role):
        cls.role = new_role

    def from_str(cls,string):
        list1 = string.split("-")
        return cls(list1[0],list1[1],list1[2])
    
    @staticmethod
    def print_obj(str1):
        print(str1)




omkar = student("omkar",112,"working")
#omkar.name = "omkar"
#omkar.id = 10
#omkar.role = "student"
omkar.change_role(100)
omkar.printdetails()
print(omkar.print_obj("hello"))

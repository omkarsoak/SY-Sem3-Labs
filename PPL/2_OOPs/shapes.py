# SHAPES 
# INHERITANCE AND POLYMORPHISM
# PPL ASSIGNMENT 6
class shape:
    def __init__(self):
        self.family = "None"
    def set_details(self):
        pass
    def get_details(self):
        pass
    def area(self):
        pass


class circle(shape):
    def __init__(self):
        self.family = "circles"
    def set_details(self,radius):
        self.radius = radius
        
    def area(self):
        return 3.14*((self.radius)**2)
    def get_details(self):
        print("Family:",self.family)
        print("Radius: ",self.radius)
        print("Area: ",self.area())

class triangle(shape):
    def __init__(self):
        self.family = "triangles"
    def set_details(self,side1,side2,side3):
        self.side1 = side1
        self.side2 = side2
        self.side3 = side3
    
    def area(self):
        return self.herons(self.side1,self.side2,self.side3)

    def get_details(self):
        print("Family:",self.family)
        print("Sides: ",self.side1," ",self.side2," ",self.side3)
        print("Area: ",self.area())
    
    @staticmethod
    def herons(a,b,c):
        s = (a+b+c)/2
        area = (s*(s-a)*(s-b)*(s-c))**(1/2)
        return area

class polygon(shape):
    def __init__(self,num):
        super().__init__()
        self.no_of_sides = num

class square(polygon):
    def __init__(self):
        self.family = "squares"
    def set_details(self,side):
        self.side = side
    
    def area(self):
        return self.side**2
    def get_details(self):
        print("Family:",self.family)
        print("Side: ",self.side)
        print("Area: ",self.area())

class octagon(polygon):
    def __init__(self):
        self.family = "octagons"
    def set_details(self,side):
        self.side = side
    
    def area(self):
        return 4.828*(self.side**2)
    def get_details(self):
        print("Family:",self.family)
        print("Side: ",self.side)
        print("Area: ",self.area())

tri1 = triangle()
tri1.set_details(6,8,10)
tri1.area()
tri1.get_details()
print("---------")

sqr1 = square()
sqr1.set_details(8)
sqr1.area()
sqr1.get_details()
print("---------")

circ1 = circle()
circ1.set_details(4)
circ1.area()
circ1.get_details()
print("--------")

oct1 = octagon()
oct1.set_details(5)
oct1.area()
oct1.get_details()
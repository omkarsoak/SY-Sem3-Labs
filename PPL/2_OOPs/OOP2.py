class employee:
	address = "pune"
	def __init__(self,name1="none",amount=100):
		self.name = name1
		self.salary = amount
	
	@classmethod
	def print_data(cls,address1):
		cls.address = address1
		print(cls.address)
	
	def instance_method(self,new1):
		self.address = new1
		print(self.address)
		print(self.name)



#address is class attribute
#name, role, salary are instance attributes

#creating objects
omkar = employee("omkar",10000)
emp1 = employee("hello")

print(omkar.name)
print(omkar.salary)
print(omkar.address)
print(emp1.salary)
omkar.print_data("new address")
emp1.instance_method("new2")
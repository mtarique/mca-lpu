class Dog: 
    attr1 =  "mammal"

    def __init__(self, name): 
        self.name = name
    
    def speak(self):    
        print("My name is {}".format(self.name))

# Initialize the object
Rodger = Dog("Rodgerssssss")
Tommy = Dog("Tommyssssssssss")

'''
print("Rodger is a {}".format(Rodger.__class__.attr1))
print("Tommy is a {}".format(Tommy.__class__.attr1))

print("My name is {}".format(Rodger.name))
print("My name is {}".format(Tommy.name))
'''

Rodger.speak()
Tommy.speak()
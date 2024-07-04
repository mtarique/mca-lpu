class Person(object):
    def __init__(self, name, id):
        self.name = name
        self.id = id
    
    def display(self): 
        print(self.name)
        print(self.id)

class Employee(Person):
    def __init__(self, name, id, salary, title):
        self.salary = salary
        self.title = title

        Person.__init__(self, name, id)

    def details(self): 
        print("Name: {}".format(self.name))
        print("Id: {}".format(self.id))
        print("Salary: {}".format(self.salary))
        print("Post: {}".format(self.title))

# creation of an object variable or an instance
a = Employee('Rahul', 886012, 200000, "Intern")
# calling a function of the class Person using
# its instance
a.display()
a.details()

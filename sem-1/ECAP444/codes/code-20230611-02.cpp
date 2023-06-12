// C++ program to demonstrate constructor overloading
#include <iostream>
using namespace std;
class Person { // create person class
private:
int age; // data member
public:
// 1. Constructor with no arguments
Person()
{
age = 20; // when object is created the age will be 20
}
// 2. Constructor with an argument
Person(int a)
{ // when parameterised Constructor is called with a value the
// age passed will be initialised
age = a;
}
int getAge()
{ // getter to return the age
return age;
}
};
int main()
{
Person person1, person2(45); // called the object of person class in differnt way

cout<< "Person1 Age = " << person1.getAge() <<endl;
cout<< "Person2 Age = " << person2.getAge() <<endl;
return 0;
}
#include <iostream>
using namespace std;

// Base class
class father {
public:
void fatherFunction() {
cout << "Some content in father class.\n" ;
}
};

// Another base class
class mother {
public:
void motherFunction() {
cout << "Some content in mother class.\n" ;
}
};

// Derived class
class MyChildClass: public father, public mother {
};

int main() {
MyChildClass myObj;
myObj.fatherFunction();
myObj.motherFunction();
return 0;
}
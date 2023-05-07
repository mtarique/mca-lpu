#include <iostream>
using namespace std;

// GrandParent class
class GrandParent {
public:
void myFunction() {
cout << "Some content in Grand parent class." ;
}
};

// Parent class
class Parent: public GrandParent {
};

// Grandchild class
class GrandChild: public Parent {
};

int main() {
GrandChild myObj;
myObj.myFunction();
return 0;
}
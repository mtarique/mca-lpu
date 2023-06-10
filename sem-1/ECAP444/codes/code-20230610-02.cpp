/******************************************************************************

Online C++ Compiler.
Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Vehicle
{
public:
    virtual void wheels() { cout << " No of wheels \n"; }
};

class Car : public Vehicle
{
public:
    void wheels() { cout << "I have 4 wheels \n"; }
};

int main(void)
{
    Vehicle *bp = new Car;
    bp->wheels(); // RUN-TIME POLYMORPHISM
    return 0;
}
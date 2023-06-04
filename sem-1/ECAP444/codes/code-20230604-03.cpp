#include <iostream>
#include <exception>
#include <typeinfo>
using namespace std;
class A
{
    virtual void fun(){};
};
int main()
{
    try
    {
        A *a = NULL;
        typeid(*a);
    }
    catch (exception &e)
    {
        cout << "Exception: " << e.what();
    }
    return 0;
}
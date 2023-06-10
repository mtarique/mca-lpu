#include <iostream>
using namespace std;
class A
{
public:
    int x;
};
class B : virtual public A
{
public:
    int y;
};
class C : virtual public A
{
public:
    int z;
};
class D : public C, public B
{
public:
    int x1;
};
int main()
{
    D obj;
    obj.x = 100;
    obj.y = 20;
    obj.z = 30;
    obj.x1 = 200;
    cout << "\n X : " << obj.x;
    cout << "\n Y : " << obj.y;
    cout << "\n Z : " << obj.z;
    cout << "\n X1 : " << obj.x1;
}
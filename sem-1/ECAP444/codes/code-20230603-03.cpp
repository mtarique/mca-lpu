#include <iostream>
using namespace std;
template <typename T>
class base
{

protected:
    int x = 100, y = 10;
};

template <typename T>
class derived : public base<T>
{

public:
    int sum() { return this->x + this->y; }
};

int main()
{
    derived<int> d;
    cout << "Sum of x and y is" << d.sum();
    return 0;
}
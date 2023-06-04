/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    try
    {
        int a, b;
        cout << "Enter two integer values: ";
        cin >> a >> b;
        try
        {
            if (b == 0)
            {
                throw b;
            }
            else
            {
                cout << "Division of a and b is " << (a / b);
            }
        }
        catch (...)
        {
            throw;
        }
    }
    catch (int)
    {
        cout << "Second value cannot be zero";
    }
    return 0;
}
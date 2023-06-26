#include<iostream>
using namespace std; 

class Employee {
    private: 
        int a, b, c; 
    public: 
        int d, e;
        void setData(int a1, int b1, int c1);
        void getData() {
            cout<<"The value of a is "<<a<<endl; 
            cout<<"The value of b is "<<b<<endl; 
            cout<<"The value of c is "<<c<<endl; 
            cout<<"The value of d is "<<d<<endl; 
            cout<<"The value of e is "<<e<<endl; 
        }
} tarique, sumit;

void Employee::setData(int a1, int b1, int c1) { 
    a = a1; 
    b = b1; 
    c = c1;
}

int main() {
    // Employee tarique; 
    tarique.d = 34; 
    tarique.e = 89; 
    tarique.setData(3, 5, 6);
    tarique.getData();

    sumit.d = 10;
    sumit.e = 11; 
    sumit.setData(7, 8, 9); 
    sumit.getData(); 
    return 0;
}
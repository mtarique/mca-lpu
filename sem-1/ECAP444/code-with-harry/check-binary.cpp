// Nesting of member functions
#include<iostream>
#include<string>

using namespace std; 

class binary {
    string s; 
    void checkBinary(void); // Made it private to check

    public: 
        void readNumber(void);
        // void checkBinary(void); 
        void interchangeBinary(void); 
        void display(void); 
}; 

void binary::readNumber(void) {
    cout<<"Enter a binary number"<<endl;
    cin>>s; 
}; 

void binary::checkBinary(void) {
    for(int i = 0; i < s.length(); i++) {
        if(s.at(i) != '0' && s.at(i) != '1') {
            cout<<"Incorrect binary format"<<endl; 
            exit(0); 
        }
    }    
}

void binary::interchangeBinary(void) {
    checkBinary(); // check for binary before interchanging the binary number
    for(int i = 0; i < s.length(); i++) {
        if(s.at(i) == '0') {
            s.at(i) = '1'; 
        } else {
            s.at(i) = '0'; 
        }
    }
}

void binary::display(void) {
    cout<<"Displaying your binary number"<<endl;

    for(int i = 0; i < s.length(); i++) {
        cout<<s.at(i); 
    }

    cout<<endl;
}

int main() {
    binary b; 
    b.readNumber();
    // b.checkBinary();
    b.interchangeBinary(); 
    b.display();
    return 0; 
}
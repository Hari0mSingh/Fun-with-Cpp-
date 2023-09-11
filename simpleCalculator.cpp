#include<iostream>
using namespace std;

//This program will perform (+,-,*,/)operations on user input and also iput operation from user.

int main(){
    int a,b;
    cout<<"{To perform arithmatic Operations}"<<endl;
    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Entre the value of B: ";
    cin>>b;

    char op;
    cout<<"Enter the Operation want to perform: ";
    cin>>op;

    switch (op){
        case '+':{
            cout<<"The addtio is :"<<(a+b)<<endl;
            break;
        }
        case '-':{
            cout<<"The subtraction is :"<<(a-b)<<endl;
            break;
        }
        case '*':{
            cout<<"The multiplicatiion is :"<<(a*b)<<endl;
            break;
        }
        case '/':{
            cout<<"The division is :"<<(a/b)<<endl;
            break;
        }
        case '%':{
            cout<<"The modulus is :"<<(a%b)<<endl;
            break;
        }
        default:{
            cout<<"Enter the correct Operation! "<<endl;
        }
    }
}
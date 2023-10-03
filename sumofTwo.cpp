#include<iostream>
using namespace std;

//This is a simple  example of Class and objects in c++

class sum{
    private:
    int a;//data member
    int b;//data member
    public:
    int getinput(){
        cout<<"Enter the value of A : ";//Member function
        cin>>a;
        cout<<"Enter the value of B : ";//Member function
        cin>>b;
    }
    void displaySum(){
        cout<<"The sum is : "<<a+b;//Operation
    }
};

int main(){
    sum s;//Object creation
    s.getinput();//Function call
    s.displaySum();//Function call

    return 0;
}
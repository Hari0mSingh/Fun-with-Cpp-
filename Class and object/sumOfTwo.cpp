#include<iostream>
using namespace std;

//create a class performing the sum of two numbers.

class sum{
    int x;
    int y;
    public:
    sum(){
        x=10;
        y=23;
    }
    void printsum(){
        cout<<"The sum of numbers are : "<<x+y<<endl;
    }
};

int main(){
    sum obj;
    obj.printsum();

    return 0;
}

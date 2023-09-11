#include<iostream>
using namespace std;

//This program will tells weather a number is even or odd 

bool isEven(int n){
    if(n&1){//Tells the odd number 
        return 0;
    }

    return 1;
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;

    if(isEven(n)){
        cout<<n<<" is a even number.";
    }
    else{
        cout<<n<<" is a odd number.";
    }

    return 0;
}
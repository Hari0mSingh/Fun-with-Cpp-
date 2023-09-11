#include<iostream>
using namespace std;

//This program will calculate the Nth Power of a Number. 

int power(int n, int power){//function for calculating the power of the number
    int ans=1;
    for(int i=1;i<=power;i++){
        ans=ans*n;
    }
    return ans;
}

int main(){
    int n,pow;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    cout<<"Enter the Power: "<<endl;
    cin>>pow;
    cout<<n<<" to the power "<<pow<<" is "<<power(n,pow)<<endl;//will print the power of the number N

    return 0;
}
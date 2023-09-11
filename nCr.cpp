#include<iostream>
using namespace std;

int factorial(int n){//calculate the factorial of N
    int fact=1;
    for(int i=1; i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r){
    int ans=((factorial(n))/(factorial(r)*factorial(n-r)));//Calculate the nCr of N and R
}

int main(){
    int n,r;
    cout<<"Enter the valuse of N: ";
    cin>>n;
    cout<<"Enter the value of R: ";
    cin>>r;

    cout<<"The nCr of n = "<<n<<" and r = "<<r<<" is "<<nCr(n,n);

    return 0;

}
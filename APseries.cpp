#include<iostream>
using namespace std;for
int AP(int n){
    return (3*n+7);//Formula for counting the Nth term in AP
}


int main(){
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    
    cout<<"The Nth term for n = "<<n<<" is "<<AP(n);//Printing of result of Nth AP

    return 0;
}
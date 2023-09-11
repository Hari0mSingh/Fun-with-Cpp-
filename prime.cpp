#include<iostream>
using namespace std;


int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){//N is divided,therefor it not a Prime Number
            return 0;
        }
    }

    return 1;//N is prime.
}

int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    
    if(isPrime(n)){
        cout<<n<<" is a prime number.";
    }
    else{
        cout<<n<<" is not a prime number.";
    }
   
}
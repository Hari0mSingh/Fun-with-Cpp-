#include<iostream>
using namespace std;

//This array will print the sum all elements of array

int sum(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[10];
    //Input array
    cout<<"Enter Array elements"<<endl;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    
    //function calling
    cout<<"The sum is : "<<sum(arr,10)<<endl;
    cout<<"Printing is Done";
    return 0;
}
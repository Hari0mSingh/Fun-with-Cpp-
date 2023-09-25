#include<iostream>
using namespace std;

/*You are given an Array of N elements, every element appearce in the Array at once, 
there is one element that appearce twice in the Array Find that element*/

int findDuplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];//it will cancle out duplicate elements
    }
    for(int i=1;i<size;i++){
        ans=ans^arr[i];//doing(XOR) it also cancle out the duplicate elements,only one element remains that is dupicate in the arr[]
    }
    return ans;
}

void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={1,2,3,4,1};
    cout<<"Given Array : ";
    print(arr,5);
    int duplicate = findDuplicate(arr,5); 
    cout<<"Duplicate element is : "<<duplicate;

    return 0;
}
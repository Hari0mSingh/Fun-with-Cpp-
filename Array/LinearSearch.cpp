#include<iostream>
using namespace std;

//This program will tell us that the user input element ispresent in array or not.

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;//key is present
        }
    }
    return 0;//Key is absent
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={-1,5,7,-8,5,1,3,-6,6,10};//Given Array.
    cout<<"Given array : ";
    printArray(arr,10);
    int key;
    cout<<"Enter the key element to search in the array."<<endl;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<key<<" Is present in the array.";
    }
    else{
        cout<<key<<" Is not present in the array";
    }
    return 0;
}
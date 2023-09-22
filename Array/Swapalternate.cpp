#include<iostream>
using namespace std;
//This program will Swap the Alternative elements.

void swap(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<=size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void print(int arr[],int size){
   
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int even[6]={6,4,7,1,9,0};
    int odd[5]={7,1,9,0,2};
    print(even,6);
    cout<<"Alternate swaped array : ";
    swap(even,6);
    print(even,6);

    print(odd,5);
    cout<<"Alternate swaped array : ";
    swap(odd,5);
    print(odd,5);

    return 0;
    
}
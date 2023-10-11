#include<iostream>
using namespace std;

// Performing Bubble Sort algorithm

int main(){
    int arr[10] = {5,4,6,3,7,2,8,1,9,11};
    int n = 10;

    for(int i=1;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }

    cout<<"Sorted array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
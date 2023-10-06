#include<iostream>
using namespace std;

//you have given a orted rotated array find the Pivot element of the Array

int findPivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return e;//You can also retur s
}

int main(){
    int arr[]={4,5,6,8,1,2,3};

    cout<<"Pivot element index is : "<<findPivot(arr,7);

    return 0;
   
}
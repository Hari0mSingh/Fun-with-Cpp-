#include<iostream>
using namespace std;

//You have given an Array of N elements and find K element First and last occurence{index} in the Areay ,Array may contain duplicate elements
//Return -1 if element in not present in the Array


int firstOcc(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(key>arr[mid])//goto right
        {  
            s = mid+1;
        }
        else if (key<arr[mid])//goto left
        {
            e = mid-1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(key>arr[mid])//goto right
        {  
            s = mid+1;
        }
        else if (key<arr[mid])//goto left
        {
            e = mid-1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,5,9,5};
    cout<<"First occurrence of 5 is at index : "<<firstOcc(arr,10,5)<<endl;
    cout<<"last occurrence of 5 is at index : "<<lastOcc(arr,10,5)<<endl;


    return 0;
}

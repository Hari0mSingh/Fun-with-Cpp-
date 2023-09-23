#include<iostream>
using namespace std;

/*You have given an integer array of size N.where N  = [2M+1],
Now, in the given array,'M' numbers are present twice and one number 
is presnet only one.
you need to find and return that number which is unique in the array.*/


int findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];//Doing XOR for finding unique number
    }
    return ans;
}
void print(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";//printing given array
    }
    cout<<endl;
}
int main(){
    int arr[5] = {1,6,7,6,1};
    cout<<"The given array is : ";
    print(arr,5);
    int number = findUnique(arr,5);
    cout<<"The Unique number in this array is : "<<number;//printing unique number

    return 0;
}
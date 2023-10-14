#include<iostream>
using namespace std;

//Performing Insertion sort algo.


int printArr(int arr[], int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}


int main(){
    int arr[10] = {5,4,6,3,7,2,8,1,9,0};
    int n = 10;

    cout<<"Befor Sorting : ";
    printArr(arr, n);

    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{//stop
                break;
            }
        }
        arr[j+1] = temp;
    }

    cout<<endl;
    cout<<"The sorted Array is : ";
    printArr(arr ,n);
   
}


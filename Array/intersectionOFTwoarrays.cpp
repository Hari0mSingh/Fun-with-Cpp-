#include<iostream>
using namespace std;

//Find intersection of two Arrays
/*The lenght of each Array is greater tha zero,
Both Arrays are sorted in non-decreasin order,
The output should be in the order of elements that occur in the original arrays,
If there is no interserction present then retuen a single integer -1*/


int main(){
    int arr1[5]={1,2,4,4,5};
    int arr2[5]={4,5,6,7,9};

    int i=0,j=0;

    while(i<5 && j<5){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";//Printing common elements
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}
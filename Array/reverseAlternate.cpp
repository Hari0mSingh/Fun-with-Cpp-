#include<iostream>
using namespace std;

// This program will find the Reverse of an Array

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int n) {//Reverse Alternate element
    for(int i=0;i<n;i++){
        if(i++<n){
            swap(arr[i],arr[i+1]);
            i+=2;
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 8}; // Even Array
    int arr2[] = {6, 4, 9, 2, 5};    // Odd Array

    cout << "Array 1 before reverse : ";
    printArray(arr1, 6);
    reverse(arr1, 6);
    cout << "Array 1 after reverse : ";
    printArray(arr1, 6); // 1st Array reversed

    cout << "Array 2 before reverse : ";
    printArray(arr2, 5);
    reverse(arr2, 5);
    cout << "Array 2 after reverse : ";
    printArray(arr2, 5); // 2nd Array reversed

    return 0;
}

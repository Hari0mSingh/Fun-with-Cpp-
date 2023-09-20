#include<iostream>
#include<climits>
using namespace std;

//This program will print the Maximumn and the minimum element from the Array.

int getMax(int arr[], int n){
    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int getMin(int arr[], int n){
    int min = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int main(){
    int num[5];
    
    // Taking Array input
    cout << "Enter 5 integers:" << endl;
    for(int i = 0; i < 5; i++){
        cin >> num[i];
    }
    
    int maximum = getMax(num, 5);
    int minimum = getMin(num, 5);
    
    cout << "Maximum value is: " << maximum << endl;
    cout << "Minimum value is: " << minimum << endl;

    return 0;
}

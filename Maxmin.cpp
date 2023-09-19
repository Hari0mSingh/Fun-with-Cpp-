#include<iostream>
#include<climits>
using namespace std;

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
    int num[100];
    
    // Taking Array input
    cout << "Enter 100 integers:" << endl;
    for(int i = 0; i < 100; i++){
        cin >> num[i];
    }
    
    int maximum = getMax(num, 100);
    int minimum = getMin(num, 100);
    
    cout << "Maximum value is: " << maximum << endl;
    cout << "Minimum value is: " << minimum << endl;

    return 0;
}

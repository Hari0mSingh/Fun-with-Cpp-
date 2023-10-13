#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 
}

int main() {
    int arr[10] = {22, 7, 1, 0, 2, 5, 8, 3, 9, 12};
    int n = 10;
    cout << "Before sorting : ";
    printArray(arr, n);
    for (int i = 0; i < (n - 1); i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "After sorting Array is : ";
    printArray(arr, n); 
    return 0;
}

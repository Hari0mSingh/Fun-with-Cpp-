#include <iostream>
using namespace std;

// Sorting 0s and 1s

void sort(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;
        }

        while (arr[right] == 1 && left < right) {
            right--;
        }

        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {0, 1, 1, 0, 1, 0, 0, 1};
    cout<<"Before Sorting : ";
    printArray(arr, 8);
    sort(arr, 8);
    cout<<"After Sorting  : ";
    printArray(arr, 8);

    return 0;
}

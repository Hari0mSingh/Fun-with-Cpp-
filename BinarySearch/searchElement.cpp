#include<iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;  // You can also return 's'
}

int binarySearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid; // returning key element index
        }
        if (key > arr[mid]) { // Searching right side elements from mid
            start = mid + 1;
        }
        else { // Searching left side elements from mid
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int key;
    int n = 9;
    cout << "Enter Key : " << endl;
    cin >> key;
    int pivot = findPivot(arr, 9);

    if (key >= arr[pivot] && key <= arr[n - 1]) {
        int result = binarySearch(arr, pivot, n - 1, key); // Searching in 2nd line
        if (result != -1) {
            cout << "Key found at index: " << result << endl;
        }
        else {
            cout << "Key not found." << endl;
        }
    }
    else {
        int result = binarySearch(arr, 0, pivot - 1, key); // Searching in 1st line
        if (result != -1) {
            cout << "Key found at index: " << result << endl;
        }
        else {
            cout << "Key not found." << endl;
        }
    }

    return 0;
}

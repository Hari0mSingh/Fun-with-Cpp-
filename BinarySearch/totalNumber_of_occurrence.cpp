#include<iostream>
using namespace std;

// You have given an Array of N elements and want to find the total number of occurrences of the key element.

int firstOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[10] = {2,3,4,5,5,6,7,8,9,10};
    int key = 5;
    int first = firstOcc(arr, 10, key);
    int last = lastOcc(arr, 10, key);

    if (first != -1 && last != -1) {
        int total = (last - first) + 1;
        cout << "Total number of occurrences of " << key << " is: " << total << endl;
    }
    else {
        cout << key << " not found in the array." << endl;
    }

    return 0;
}

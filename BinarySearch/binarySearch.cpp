#include<iostream>
using namespace std;

// Performing Binary search Algo.

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

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
    int even[6] = {2, 4, 6, 8, 10,12};
    int odd[5] = {1, 3, 5, 7, 10};
    int key;
    cout << "enter key element : ";
    cin >> key;
    cout << "Return -1 if key is not present in the array" << endl << endl;
    int indexEven = binarySearch(even, 6, key);
    cout << "the key " << key << " in even array index is " << indexEven << endl;
    int indexOdd = binarySearch(odd, 5, key);
    cout << "the key " << key << " in odd array index is " << indexOdd << endl;

    return 0;
}

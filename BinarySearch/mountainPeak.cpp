#include<iostream>
using namespace std;

// Find the Peak element of a Mountain array
int main() {
    int arr[7] = {1, 3, 5, 7, 6, 4, 2};
    int start = 0;
    int end = 6;
    int peak;
    int mid = start + (end - start) / 2;

    while (start < end) {
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    peak = arr[mid];
    cout << "Peak element of the given array is : " << peak << endl;

    return 0;
}

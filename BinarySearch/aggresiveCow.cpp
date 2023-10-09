#include<iostream>
using namespace std;

// Here we are solving the Aggressive Cow problem

bool isPossible(int arr[], int k, int mid, int n) {
    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] - lastPos >= mid) {
            cowCount++;
            if (cowCount == k) {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 6};
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < 5; i++) {
        maxi = max(maxi, arr[i]);
    }
    int k;
    cout << "Enter No. of cows to be Placed : ";
    cin >> k;
    int e = maxi;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, k, mid, 5)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    cout << "The largest minimum distance between cows: " << ans;

    return 0;
}

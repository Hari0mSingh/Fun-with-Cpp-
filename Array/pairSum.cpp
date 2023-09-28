#include<iostream>
using namespace std;

//Find the pairs that makes an pairElement in the given array.

int main() {

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int pairElement;
    cout<<"Enter pair element : ";
    cin>>pairElement;
    bool foundPair = false;  // Use a flag to indicate whether a pair is found

    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {  // Start the inner loop from i+1 to avoid counting the same element twice
            if (arr[i] + arr[j] == pairElement) {
                cout << arr[i] << " " << arr[j] << endl;
                foundPair = true;  // Set the flag to true when a pair is found
            }
        }
    }

    if (!foundPair) {
        cout << "No pair found with " << pairElement << endl;
    }

    return 0;  
}

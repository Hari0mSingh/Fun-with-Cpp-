#include<iostream>
using namespace std;

//Find the triplets that will make the user defined element.

int main() {

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int tripletElement;
    cout<<"Enter tripet element : ";
    cin>>tripletElement;
    bool foundtriplet = false;  //tripet is found

    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {  
            for(int k=j+1;k<7;k++){
                if (arr[i] + arr[j] +arr[k] == tripletElement) {// Start the inner loop from i+1 to avoid counting the same element twice
                cout << arr[i] << " " << arr[j] <<" " <<arr[k] << endl;
                foundtriplet = true;  //true when a triplet is found
            }
            }
        }
    }

    if (!foundtriplet) {
        cout << "No triplet found with " << tripletElement << endl;
    }

    return 0;  
}

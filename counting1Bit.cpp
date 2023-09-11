#include <iostream>
using namespace std;

//This Program will count the No. of 1s bit in two numbers and print the result

// Function to count the number of 1s in the binary representation of a number
int countOnes(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;  // Add 1 to count if the last bit is 1
        num >>= 1;        // Right shift the number to check the next bit
    }
    return count;
}

int main() {
    int a, b;

    cout<<"Enter the value of A and B: ";
    cin>>a>>b;

    int result=countOnes(a)+countOnes(b);//stored the 1s in a variable result

    cout<<"1s in "<<a<<" and "<<b<<" : "<<result; //print the result

    return 0;
}

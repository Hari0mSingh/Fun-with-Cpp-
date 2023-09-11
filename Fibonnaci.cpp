#include <iostream>
using namespace std; 

/*Fibonacci Series = 0,1,1,2,3,5,8,13 and so on,
This Program will take input N form user and gives the output Nth fibonacci Number to the user */

// Function to calculate the Nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int fib1 = 0, fib2 = 1, fib = 0;
    for (int i = 2; i <= n; ++i) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    return fib;
}

int main() {
    int n;

    // Input from the user
    cout << "Enter a positive integer N: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    // Calculate and display the Nth Fibonacci number
    int nthFib = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << nthFib << endl;

    return 0;
}

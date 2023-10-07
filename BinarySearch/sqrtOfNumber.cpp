#include<iostream>
using namespace std;

// This program will find the square root of user input number

long long int sqrt(long long int num){
    long long int s = 1;
    long long int e = num;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e) {
        long long int square = mid * mid;
        if (square == num) {
            ans = mid;
            break; 
        }
        if (square < num) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    long long int num; 
    cout << "Enter the number for finding the Square root: " << endl;
    cin >> num;

    long long int ans = sqrt(num);
    cout << "The square root of " << num << " is " << ans << endl;
    return 0;
}

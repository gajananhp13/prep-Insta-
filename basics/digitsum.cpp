#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int digitSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Sum of digits: " << digitSum(number);
    return 0;
}
/*

  FIND THE nCr mean=  nCr= n!/r!(n-r)!

*/


#include <iostream>
using namespace std;

// Function to calculate factorial of a given number
int factorial(int a) {
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate nCr using the factorial function
int ncr(int n, int r) {
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int main() {
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
    cout << "The nCr of the given two numbers is: " << ncr(a, b) << endl;
    return 0;
}
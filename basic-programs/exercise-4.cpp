/*
 * Swap Two Numbers without using third variable
 *
 * Write a C++ Program to Swap Two Numbers without using third variable.
 * C++ Program to Swap Two Numbers without  third variable. Here’s simple Program to Swap Two
 * Numbers without using temp variable in C++ Programming Language.
 */
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "The initial numbers are: a = " << a << " b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swap the numbers are: a = " << a << " b = " << b << endl;

    return 0;
}
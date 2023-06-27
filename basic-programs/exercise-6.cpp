/*
 * Multiplication of two Numbers
 *
 * Write a C++ Program to Multiply two Numbers.
 */
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, result = 0;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = a * b;
    cout << "The multiply result is: " << result << endl;

    return 0;
}
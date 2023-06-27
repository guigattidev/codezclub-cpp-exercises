/*
 * Find Quotient and Remainder
 *
 * Write a C++ Program to Find Quotient and Remainder of 2 numbers.
 * Here’s simple C++ Program to Find Quotient and Remainder of 2 numbers in C++ Programming Language.
 *
 * In this program, user is asked to enter two integers (divisor and dividend) and
 * computes the quotient and remainder.
 * To compute quotient and remainder, both divisor and dividend should be integers.
 */
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, quotient = 0, remainder = 0;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    quotient = a / b;
    remainder = a % b;
    cout << "The quotient result is: " << quotient << endl;
    cout << "The remainder result is: " << remainder << endl;

    return 0;
}
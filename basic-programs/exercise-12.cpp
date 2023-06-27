/*
 * Addition of Two Numbers
 *
 * Write a C++ Program to find Addition of Two Numbers.
 */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, result;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    result = a + b;

    cout << "The result is: " << result << endl;

    return 0;
}
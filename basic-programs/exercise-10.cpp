/*
 * Convert inches to feet yards and inches
 *
 * Write a C++ Program to convert inches to feet yards and inches.
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter with the value in inches: ";
    cin >> c;

    a = c / 432;
    c = c % 432;
    b = c / 12;
    c = c % 12;

    cout << "The result in inches to feet, yeards and inches are: " << endl;
    cout << "Yards: " << a << ", Feet: " << b << ", Inches: " << c << endl;

    return 0;
}
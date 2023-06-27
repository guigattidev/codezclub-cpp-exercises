/*
 * Raise any number X to power N
 *
 * Write a C++ Program to raise any number X to power N.
 */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, power, result;

    cout << "Enter with the value of number: ";
    cin >> num;
    cout << "Enter with the value of power: ";
    cin >> power;

    result = pow(num, power);

    cout << "The result is: " << result << endl;

    return 0;
}
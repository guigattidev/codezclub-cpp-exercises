/*
 * Sum and Average of three numbers
 *
 * Write a C++ Program to Find Sum and Average of three numbers.
 */
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, sum;
    double average;

    cout << "Enter the value of the first number: ";
    cin >> a;
    cout << "\nEnter the value of the second number: ";
    cin >> b;
    cout << "\nEnter the value of the third number: ";
    cin >> c;

    sum = a + b + c;
    average = sum / 3;

    cout << "\nThe sum of the three numbers is " << sum << " and the average is " << average << endl;

    return 0;
}
/*
 * Display ASCII Value of a Character
 *
 * Write a C++ Program to Display ASCII Value of a Character.
 */
#include <iostream>

using namespace std;

int main()
{
    char a;

    cout << "Enter the char value: ";
    cin >> a;
    cout << "\nThe ASCII value is: " << int(a) << endl;

    return 0;
}
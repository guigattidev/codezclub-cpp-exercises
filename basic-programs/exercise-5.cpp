/*
 * Size of Int Float Double and Char data types
 *
 * Write a C++ Program to Find Size of Int Float Double and Char data types.
 */
#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    float b = 0.0;
    double c = 0.0;
    char d = 'a';

    cout << "The size of int is: " << sizeof(a) << " bytes" << endl;
    cout << "The size of float is: " << sizeof(b) << " bytes" << endl;
    cout << "The size of double is: " << sizeof(c) << " bytes" << endl;
    cout << "The size of char is: " << sizeof(d) << " byte" << endl;

    return 0;
}
/*
 * Generate Random Numbers
 *
 * Write a C++ Program to Generate Random Numbers between 0 and 100.
 */
#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    cout << "Generating random numbers: ";
    for (int i = 1; i < 10; i++)
    {
        num = rand() % 100;
        cout << " " << num << " ";
    }

    return 0;
}
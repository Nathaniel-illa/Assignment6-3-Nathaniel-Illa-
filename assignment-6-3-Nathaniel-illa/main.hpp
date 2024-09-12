#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
using namespace std;

// Function prototype
void getTwoValues(int &n1, int &n2);

// Function definition
void getTwoValues(int &n1, int &n2) {
    cout << "Enter the first integer value: ";
    cin >> n1; // Directly modifies the original variable

    cout << "Enter the second integer value: ";
    cin >> n2; // Directly modifies the original variable
}

#endif // MAIN_HPP

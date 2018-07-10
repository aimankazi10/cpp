/* WAP in C++ which will print the sum and average of 5 numbers
 *
 * Filename: sum.cpp
 * Project : c plus plus
 * Created Date: Tuesday, July 10th 2018, 7:09:53 pm
 * Author: Prof. Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs 
 * 
 */
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int count = 0;
    int sum = 0;
    int inputNumber;
    float average;

    while (count != 5)
    {
        cout << "Enter the number: ";
        cin >> inputNumber;
        sum = sum + inputNumber;
        count++;
    }

    average = sum / count;

    cout << "the sum of the numbers are :   " << sum << endl;
    cout << "the average of the numbers is :   " << average << endl;

    return 0;
}

// Output
// -------------------------------------
// Enter the number: 5
// Enter the number: 6
// Enter the number: 7
// Enter the number: 8
// Enter the number: 9
// the sum of the numbers are :   35
// the average of the numbers is :   7
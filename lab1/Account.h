/*
 * Filename: Account.h
 * Project: lab1
 * Created Date: Friday, August 17th 2018, 4:35:20 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs Learning Solutions
 */
#include <iostream>
#include <string.h>

using namespace std;

// class is a blue print. It has the design or defination
class Account
{
  private: // Access Specifier
    int account_no;
    // variable of type integer

    char holderName[50];
    // array of type character

  public: // Access Specifier
    // Function Defination. It has two formal parameters
    void setInfo(int an, char *hn)
    {
        account_no = an;
        strcpy(holderName, hn); // called function
    }

    // Function Defination
    void print()
    {
        // Standard Output
        cout << "Account Number : " << account_no << endl;
        cout << "Holder Name : " << holderName << endl;
    }
};

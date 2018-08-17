/*
 * Filename: Account.h
 * Project: lab1
 * Created Date: Friday, August 17th 2018, 4:35:20 pm
 * Author: Aiman Kazi
 * Description: This project is created to explain the concept of constructors
 * 1) Default Constructor
 * 2) Parameterized Constructor
 * 3) Parameterized Constructor with values.
 * 4) Passing object to constructor
 * 
 * Copyright (c) 2018 Visual Labs Learning Solutions
 */
#include <iostream>
#include <string.h>

using namespace std;

class Account
{
  private:
    int account_no;
    char holderName[50];
    char type[20];
    double balance;

  public:
    Account()
    {
        // Default constructors (C++ only)
        // A default constructor is a constructor that either has no parameters,
        // or if it has parameters, all the parameters have default values.
        // If no user-defined constructor exists for a class Account and one is needed,
        // the compiler implicitly declares a default parameterless constructor Account::Account()
        cout << "I am default constructor" << endl;
    }

    // Parameterized Constructor
    /*Account(int an, char *hn, char *t, double b)
    {
        account_no = an;
        strcpy(holderName, hn);
        strcpy(type, t);
        balance = b;
    }*/

    // // Parameterized Constructor with one default value
    Account(int an, char *hn, char *t, double b = 1000)
    {
        cout << "I am parameterized constructor" << endl;
        account_no = an;
        strcpy(holderName, hn);
        strcpy(type, t);
        balance = b;
    }

    // Constructor with Object as a parameter
    Account(Account &obj)
    {
        cout << "I am constructor called when object is passed as argument" << endl;
        account_no = obj.account_no;
        strcpy(holderName, obj.holderName);
        strcpy(type, obj.type);
        balance = obj.balance;
    }

    void setInfo(int an, char *hn)
    {
        account_no = an;
        strcpy(holderName, hn); // called function
    }

    void print()
    {
        cout << "Account Number : " << account_no << endl;
        cout << "Holder Name : " << holderName << endl;
        cout << "Account Type : " << type << endl;
        cout << "Account Balance : " << balance << endl;
    }
};

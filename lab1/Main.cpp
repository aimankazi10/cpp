/*
 * Filename: Account.h
 * Project: lab1
 * Created Date: Friday, August 17th 2018, 4:35:20 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs Learning Solutions
 */

#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    // Creating an Object / Instance of class Account
    Account aiman;

    // Classname.FunctionName -- called function
    aiman.setInfo(1, "Aiman Kazi");
    aiman.print();
}
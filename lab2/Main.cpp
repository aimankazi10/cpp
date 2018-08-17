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
    // Calling Default Constructor
    Account aiman;
    // We will not be using setInfo Function to set the values of data member.
    // Instead we will use parameterized constructor.
    // aiman.setInfo(1, "Aiman Kazi");
    // aiman.print();

    // Commenting the line below because i dont want garbage values
    // aiman.print();

    // This will print garbage because i have not set the values of data members
    // Account Number : 1975348163
    // Holder Name : ║k╜u7╙¿"α@
    // Account Type : ╜u¡l╜u╨@
    // Account Balance1.78028e-307

    // I will use Parameterized Constructor and pass 4 arguments
    Account mariam(1, "Mariam", "Saving", 12345);
    mariam.print();

    // I will use Parameterized Constructor and pass 3 arguments.
    // This time the default value will be applied.
    Account sarah(1, "Sarah", "Saving");
    sarah.print();

    Account sana(mariam);
    sana.print();
}
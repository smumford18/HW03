//
//  MyInteger.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/24/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "MyInteger.h"

MyInteger::MyInteger()
{
    value = 3;
}

const int MyInteger::getValue()
{
    return value;
}

const bool MyInteger::isEven()
{
    int test = value % 2;
    if(test == 0)
        return true;
    else
        return false;
}

const bool MyInteger::isOdd()
{
    int test1 = value % 2;
    if(test1 != 0)
        return true;
    else
        return false;
}

const bool MyInteger::isPrime()
{
    for(int i=2; i < 10; i++) {
        int test2 = value % i;
        if(test2 != 0)
            return false;
    }
    return true;
}

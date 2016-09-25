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
    value = 4;
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
    for(int i=2; i < value; i++) {
        int test2 = value % i;
        if(test2 == 0) {
            return false;
            break;
        }
    }
    return true;
}

bool MyInteger::isEven(int x)
{
    if(x %2 == 0)
        return true;
    else
        return false;
}

bool MyInteger::isOdd(int x)
{
    if(x%2 != 0)
        return true;
    else
        return false;
}

bool MyInteger::isPrime(int x)
{
    for(int i=2; i < x; i++) {
        int test2 = x % i;
        if(test2 == 0) {
            return false;
            break;
        }
    }
    return true;
}

bool MyInteger::isEven(const MyInteger&)
{
    if(MyInteger& % 2==0)
        return true;
    else
        return false;
}

bool MyInteger::isOdd(const MyInteger&)
{
    if(MyInteger& % 2 != 0)
        return true;
    else
        return false;
}

bool MyInteger::isPrime(const MyInteger&)
{
    for(int i=2; i < MyInteger&; i++) {
        int test2 = MyInteger& % i;
        if(test2 == 0) {
            return false;
            break;
        }
    }
    return true;
}

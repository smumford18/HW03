//
//  MyInteger.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/24/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "MyInteger.h"

MyInteger::MyInteger(int newVal)
{
    value = newVal;
}

const int MyInteger::getValue() const
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
        if(test2 == 0) {
            return false;
            break;
        }
    }
    return true;
}

bool MyInteger::isEven(int x)
{
    if(x % 2 == 0)
        return true;
    else
        return false;
}

bool MyInteger::isOdd(int x)
{
    if(x % 2 != 0)
        return true;
    else
        return false;
}

bool MyInteger::isPrime(int x)
{
    for(int i=2; i < 10; i++) {
        int test2 = x % i;
        if(test2 == 0) {
            return false;
            break;
        }
    }
    return true;
}

bool MyInteger::isEven(const MyInteger& x)
{
    if(x.getValue() % 2==0)
        return true;
    else
        return false;
}

bool MyInteger::isOdd(const MyInteger& x)
{
    if(x.getValue() % 2 != 0)
        return true;
    else
        return false;
}

bool MyInteger::isPrime(const MyInteger& x)
{
    for(int i=2; i < x.getValue(); i++) {
        int test2 = x.getValue() % i;
        if(test2 == 0) {
            return false;
            break;
        }
    }
    return true;
}

const bool MyInteger::equals(int y)
{
    if(getValue() == y)
        return true;
    else
        return false;
}

const bool MyInteger::equals(const MyInteger& p)
{
    if(p.getValue() == getValue())
        return true;
    else
        return false;
}


int MyInteger::parseInt(const string& s)
{
    int r = stoi(s);
    return r;
}

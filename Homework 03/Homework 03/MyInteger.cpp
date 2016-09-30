//
//  MyInteger.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/24/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "MyInteger.h"

//Constructor function
MyInteger::MyInteger(int newVal)
{
    value = newVal;
}

//Getter function for the value of the object
const int MyInteger::getValue() const
{
    return value;
}

//Constant function that checks for an even number
const bool MyInteger::isEven()
{
    int test = value % 2;
    if(test == 0)
        return true;
    else
        return false;
}

//Constant function that checks for an odd number
const bool MyInteger::isOdd()
{
    int test1 = value % 2;
    if(test1 != 0)
        return true;
    else
        return false;
}

//Constant function that checks for a prime number
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

//Static function that checks to see if the value passed in is even
bool MyInteger::isEven(int x)
{
    if(x % 2 == 0)
        return true;
    else
        return false;
}

//Static function that checks to see if the value passed in is odd
bool MyInteger::isOdd(int x)
{
    if(x % 2 != 0)
        return true;
    else
        return false;
}

//Static function that checks to see if the value passed in is prime
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

//Static function that checks to see if the value of the object is even
bool MyInteger::isEven(const MyInteger& x)
{
    if(x.getValue() % 2==0)
        return true;
    else
        return false;
}

//Static function that checks to see if the value of the object is odd
bool MyInteger::isOdd(const MyInteger& x)
{
    if(x.getValue() % 2 != 0)
        return true;
    else
        return false;
}

//Static function that checks to see if the value of the object is prime
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

//Function that checks to see if the passed in value is equal to the value of the object
const bool MyInteger::equals(int y)
{
    if(getValue() == y)
        return true;
    else
        return false;
}

//Function that checks to see if the value of the object is equal to the value passed in
const bool MyInteger::equals(const MyInteger& p)
{
    if(p.getValue() == getValue())
        return true;
    else
        return false;
}

//Function that converts a string into an integer
int MyInteger::parseInt(const string& s)
{
    int r = stoi(s);
    return r;
}

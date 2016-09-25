//
//  MyInteger.h
//  Homework 03
//
//  Created by Steven Mumford on 9/24/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef MyInteger_h
#define MyInteger_h

class MyInteger
{
    int value;
    
public:
    
    MyInteger();
    
    const int getValue();
    const bool isEven();
    const bool isOdd();
    const bool isPrime();
    
    static bool isEven(int);
    static bool isOdd(int);
    static bool isPrime(int);
    
    static bool isEven(const MyInteger&);
    static bool isOdd(const MyInteger&);
    static bool isPrime(const MyInteger&);
    
    const bool equals(int);
    const bool equals(const MyInteger&);
    
    static bool parseInt(const string&);
    
};

#endif

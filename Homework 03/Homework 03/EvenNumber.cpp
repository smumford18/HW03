//
//  EvenNumber.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/24/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "EvenNumber.h"

//Constructor function
EvenNumber::EvenNumber()
{
    value = 2;
}

//Setter function for the value of the object
void EvenNumber::setValue(int newValue)
{
    value = newValue;
}

//Getter function for the value of the object
int EvenNumber::getValue()
{
    return value;
}

//Function to calculate and return the next even number after the value of the object
int EvenNumber::getNext()
{
    int temp0 = value;
    temp0 += 2;
    return temp0;
}

//Function to calculate and return the previous even number before the value of the object
int EvenNumber::getPrevious()
{
    int temp1 = value;
    temp1 -= 2;
    return temp1;
}

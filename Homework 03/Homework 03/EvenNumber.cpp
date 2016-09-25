//
//  EvenNumber.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/24/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "EvenNumber.h"

EvenNumber::EvenNumber()
{
    value = 2;
}

void EvenNumber::setValue(int newValue)
{
    value = newValue;
}

int EvenNumber::getValue()
{
    return value;
}

int EvenNumber::getNext()
{
    int temp0 = value;
    temp0 += 2;
    return temp0;
}

int EvenNumber::getPrevious()
{
    int temp1 = value;
    temp1 -= 2;
    return temp1;
}

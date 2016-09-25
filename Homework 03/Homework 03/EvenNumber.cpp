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

int EvenNumber::getValue()
{
    return value;
}

int EvenNumber::getNext()
{
    value += 2;
    return value;
}

int EvenNumber::getPrevious()
{
    value -= 2;
    return value;
}

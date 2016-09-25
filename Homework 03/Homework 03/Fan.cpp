//
//  Fan.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/23/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Fan.h"

    Fan::Fan()
    {
        speed = 1;
        on = false;
        radius = 5;
    }
    
    void Fan::setSpeed(int newSpeed)
    {
        if (newSpeed >= 1 || newSpeed <= 3)
            speed = newSpeed;
    }
    
    void Fan::setRadius(int newRadius)
    {
        if(newRadius > 0)
            radius = newRadius;
    }
    
    void Fan::turnOn()
    {
        on = true;
    }
    
    void Fan::turnOff()
    {
        on = false;
    }
    
    double Fan::getRadius()
    {
        return radius;
    }
    
    int Fan::getSpeed()
    {
        return speed;
    }
    
    bool Fan::getOn()
    {
        return on;
    }

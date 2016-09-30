//
//  Fan.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/23/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Fan.h"

//Constructor function
    Fan::Fan()
    {
        speed = 1;
        on = false;
        radius = 5;
    }

//Setter function for speed, makes sure speed is between 1 and 3
    void Fan::setSpeed(int newSpeed)
    {
        if (newSpeed >= 1 || newSpeed <= 3)
            speed = newSpeed;
    }

//Setter function for radius, makes sure radius is positive
    void Fan::setRadius(int newRadius)
    {
        if(newRadius > 0)
            radius = newRadius;
    }

//Function that turns on fan
    void Fan::turnOn()
    {
        on = true;
    }

//Function to turn off fan
    void Fan::turnOff()
    {
        on = false;
    }

//Function to return radius
    double Fan::getRadius()
    {
        return radius;
    }

//Function to return speed
    int Fan::getSpeed()
    {
        return speed;
    }

//Function to see if fan is on or off
    bool Fan::getOn()
    {
        return on;
    }

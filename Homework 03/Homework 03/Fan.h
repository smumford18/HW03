//
//  Fan.h
//  Homework 03
//
//  Created by Steven Mumford on 9/23/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef FAN_H_
#define FAN_H_

class Fan

{
    
private:
    
    int speed;
    bool on;
    double radius;
    
public:
    
    Fan();
    
    void setSpeed(int newSpeed);
    void setRadius(int newRadius);
    void turnOn();
    void turnOff();
    double getRadius();
    int getSpeed();
    bool getOn();
    
};

#endif 

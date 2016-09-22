//
//  main.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/21/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include <iostream>

using namespace std;

class Fan
{
public:
    int speed;
    bool on;
    double radius;
    
    Fan()
    {
        speed = 1;
        on = false;
        radius = 5;
    }
    
    void setSpeed(int newSpeed)
    {
        if (newSpeed >= 1 || newSpeed <= 3)
            speed = newSpeed;
    }
    
    void setRadius(int newRadius)
    {
        if(newRadius > 0)
            radius = newRadius;
    }
    
    void turnOn()
    {
        on = true;
    }
    
    void turnOff()
    {
        on = false;
    }
    
    double getRadius()
    {
        return radius;
    }
    
    int getSpeed()
    {
        return speed;
    }
    
    bool getOn()
    {
        return on;
    }
    
};

int main() {
    
    Fan fan1;
    Fan fan2;
    
    fan1.setSpeed(3);
    fan1.setRadius(10);
    fan1.turnOn();
    
    fan2.setSpeed(2);
    fan2.setRadius(5);
    fan2.turnOff();
    
    cout << "Fan 1 has a speed of " << fan1.getSpeed() << ", a radius of " << fan1.getRadius() << ", and is turned ";
    if(fan1.getOn() == 1)
        cout << "on. \n";
    else
        cout << "off. \n";
    
    cout << "Fan 2 has a speed of " << fan2.getSpeed() << ", a radius of " << fan2.getRadius() << ", and is turned ";
    if(fan2.getOn() == 1)
        cout << "on. \n";
    else
        cout << "off. \n";
    
    return 0;
    
}

//
//  main.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/21/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include <iostream>
#include <cmath>

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

class QuadraticEquation
{
public:
    
    double a;
    double b;
    double c;
    
    QuadraticEquation()
    {
        a = 1;
        b = 1;
        c = 1;
    }
    
    double getA()
    {
        return a;
    }
    
    double getB()
    {
        return b;
    }
    
    double getC()
    {
        return c;
    }
    
    double getDiscriminant(double a, double b, double c)
    {
        int disc = pow(b , 2) - 4 * a * c;
        return disc;
    }
    
    double getRoot1(double a, double b, double c)
    {
        double r1 = (-b + sqrt(pow(b,2)- 4 * a * c)) / (2 * a);
        if(getDiscriminant(a, b, c) > 0)
            return r1;
        else
            return 0;
    }
    
    double getRoot2(double a, double b, double c)
    {
        double r2 = (-b - sqrt(pow(b,2)- 4 * a * c)) / (2 * a);
        if(getDiscriminant(a, b, c) > 0)
            return r2;
        else
            return 0;
    }
};

int main() {
    
    // Exercise 9.2
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
        cout << "on. \n\n";
    else
        cout << "off. \n\n";
    
    // Exercise 9.6
    double a, b, c;
    QuadraticEquation QE1;
    
    cout << "Enter values for a, b, and c\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    
    if(QE1.getDiscriminant(a, b, c) > 0)
        cout << "The roots are " << QE1.getRoot1(a, b, c) << " and " << QE1.getRoot2(a, b, c) << "\n\n";
    if(QE1.getDiscriminant(a, b, c) == 0)
        cout << "There is only one root. It is " << QE1.getRoot1(a, b, c) << "\n\n";
    if(QE1.getDiscriminant(a, b, c) < 0)
        cout << "The equation has no real roots.\n\n";
    
    return 0;
    
}

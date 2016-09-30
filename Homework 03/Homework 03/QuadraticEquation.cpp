//
//  QuadraticEquation.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/24/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "QuadraticEquation.h"
#include <cmath>

//Constructor function
    QuadraticEquation::QuadraticEquation()
    {
        a = 1;
        b = 1;
        c = 1;
    }

//Getter for a
    double QuadraticEquation::getA()
    {
        return a;
    }

//Getter for b
    double QuadraticEquation::getB()
    {
        return b;
    }

//Getter for c
    double QuadraticEquation::getC()
    {
        return c;
    }

//Function that calculates and returns the discriminant
    double QuadraticEquation::getDiscriminant(double a, double b, double c)
    {
        int disc = pow(b , 2) - 4 * a * c;
        return disc;
    }

//Function that calculates and returns the first root
    double QuadraticEquation::getRoot1(double a, double b, double c)
    {
        double r1 = (-b + sqrt(pow(b,2)- 4 * a * c)) / (2 * a);
        if(getDiscriminant(a, b, c) > 0)
            return r1;
        else
            return 0;
    }

//Function that calculates and returns the second root
    double QuadraticEquation::getRoot2(double a, double b, double c)
    {
        double r2 = (-b - sqrt(pow(b,2)- 4 * a * c)) / (2 * a);
        if(getDiscriminant(a, b, c) > 0)
            return r2;
        else
            return 0;
    }


//
//  QuadraticEquation.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/24/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "QuadraticEquation.h"
#include <cmath>

//No argument constructor function
    QuadraticEquation::QuadraticEquation()
    {
        a = 1;
        b = 1;
        c = 1;
    }

//Constructor function
    QuadraticEquation::QuadraticEquation(int newA, int newB, int newC)
    {
        a = newA;
        b = newB;
        c = newC;
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
    double QuadraticEquation::getDiscriminant()
    {
        int disc = pow(getB() , 2) - 4 * getA() * getC();
        return disc;
    }

//Function that calculates and returns the first root
    double QuadraticEquation::getRoot1()
    {
        double r1 = (-getB() + sqrt(pow(getB(),2)- 4 * getA() * getC())) / (2 * getA());
        if(getDiscriminant() > 0)
            return r1;
        else
            return 0;
    }

//Function that calculates and returns the second root
    double QuadraticEquation::getRoot2()
    {
        double r2 = (-getB() - sqrt(pow(getB(),2)- 4 * getA() * getC())) / (2 * getA());
        if(getDiscriminant() > 0)
            return r2;
        else
            return 0;
    }


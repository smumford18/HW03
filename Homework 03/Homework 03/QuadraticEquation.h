//
//  QuadraticEquation.h
//  Homework 03
//
//  Created by Steven Mumford on 9/24/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef QuadraticEquation_h
#define QuadraticEquation_h

class QuadraticEquation
{
    
    double a;
    double b;
    double c;
    
public:
    
    QuadraticEquation();
    QuadraticEquation(int, int, int);
    
    double getA();
    double getB();
    double getC();
    double getDiscriminant();
    double getRoot1();
    double getRoot2();
    
};


#endif

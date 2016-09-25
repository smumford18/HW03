//
//  main.cpp
//  Homework 03
//
//  Created by Steven Mumford on 9/21/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include "Fan.h"
#include "QuadraticEquation.h"
#include "EvenNumber.h"
#include "MyInteger.h"

using namespace std;

string sort(string& s);

int main() {
/*
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
    
    // Exercise 9.11
    EvenNumber EvenTest;
    
    EvenTest.setValue(16);
    cout << "The even value is " << EvenTest.getValue() << endl;
    cout << "The next even value is " << EvenTest.getNext() << endl;
    cout << "The previous even value is " << EvenTest.getPrevious() << endl << endl;

    // Exercise 10.4
    string test;
    cout << "Enter a string s ";
    cin >> test;
    
    string sorted = sort(test);
    cout << sorted << endl;
*/
    // Exercise 10.10
    MyInteger MyInteger1;
    
    cout << MyInteger1.getValue() << endl;
    cout << MyInteger1.isEven() << endl;
    cout << MyInteger1.isOdd() << endl;
    cout << MyInteger1.isPrime() << endl;
    
    
    return 0;
    
}

string sort(string& s) {
    
    double size = s.size();
    
    for(int i=0; i <= size; i++) {
        if(s[i] > s[i+1])
            swap(s[i],s[i+1]);
    }
    
    return s;
}

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
    
    QuadraticEquation QE2(a,b,c);
    
    if(QE1.getDiscriminant() > 0)
        cout << "The roots are " << QE1.getRoot1() << " and " << QE1.getRoot2() << "\n\n";
    if(QE1.getDiscriminant() == 0)
        cout << "There is only one root. It is " << QE1.getRoot1() << "\n\n";
    if(QE1.getDiscriminant() < 0)
        cout << "The equation has no real roots.\n\n";
    
    cout << QE2.getDiscriminant() << endl;
    cout << QE2.getRoot1() << endl;
    cout << QE2.getRoot2() << "\n\n";
    
    // Exercise 9.11
    EvenNumber EvenTest;
    
    EvenTest.setValue(16);
    cout << "The even value is " << EvenTest.getValue() << endl;
    cout << "The next even value is " << EvenTest.getNext() << endl;
    cout << "The previous even value is " << EvenTest.getPrevious() << endl << endl;

    // Exercise 10.4
    string test;
    cout << "Enter a string ";
    cin >> test;
 
    string sorted = sort(test);
    cout << sorted << endl << endl;

    
    // Exercise 10.10
    MyInteger MyInteger1(11);
    
    int z = 2;
    
    cout << "For the value: " << MyInteger1.getValue() << endl;
    //Constant functions
    if(MyInteger1.isEven() == 1)
        cout << "The value is even" <<endl;
    if(MyInteger1.isOdd() == 1)
        cout << "The value is odd" << endl;
    if(MyInteger1.isPrime() == 1)
        cout << "The value is prime\n\n";
    else
        cout << "The value is not prime\n\n";
    
    cout << "For the value: " << z << endl;
    // Static pass by value function
    if(MyInteger::isEven(z) == 1)
        cout << "The value is even\n";
    if(MyInteger::isOdd(z) == 1)
        cout << "The value is odd\n";
    if(MyInteger::isPrime(z) == 1)
        cout << "The value is prime\n\n";
    else
        cout << "The value is not prime\n\n";
    
    cout << "For the value of the object: " << MyInteger1.getValue() << endl;
    // Static pass by reference functions
    if(MyInteger::isEven(MyInteger1) == 1)
        cout << "The value is even" << endl;
    if(MyInteger::isOdd(MyInteger1) == 1)
        cout << "The value is odd" << endl;
    if(MyInteger::isPrime(MyInteger1) == 1)
        cout << "The value is prime \n\n";
    else
        cout << "The value is not prime\n\n";
    
    if(MyInteger1.equals(11) == MyInteger1.equals(MyInteger1))
        cout << "The value of the object is the same as the specified value." << endl;
    
    if(MyInteger1.equals(MyInteger1) == MyInteger1.equals(10))
        cout << "The value of the object is the same as the specified value." << endl;
    
    cout << "The parsed string is " << MyInteger1.parseInt("10") << "\n\n";
    
    return 0;
    
}

//Function to alphabetize a string
string sort(string& s) {
    
    double size = s.length();
    for(int j=0; j <= size; j++) {
        for(int i=0; i < size-1; i++) {
            if(s[i] > s[i+1]) {
                    char temp = s[i];
                    s[i] = s[i+1];
                    s[i+1] = temp;
            }
        }
    }
    return s;
}


//Inheritance

// a class inherits properties of another class

//  A class is parent class/super class

// B class  is sub class/ sub class

// Access Specifiers & Modes of Inheritance

//public
//data & functions --> they can be accessed from any where of the code
//protected
//accessible in own class ,parent class & derived class
//private
// acessible only in own class

#include<iostream>
using namespace std;

class Parent{

public:
int x;

protected:
int y;

private:
int z;
};

class Child1: public Parent
{
// x will remain public 
// y will remian protected
// z will not be accessible

};

class Child2: private Parent{
    //x will be private
    //y will be private
    //z will be inaccessible
};

class Child3: protected Parent{
    // x will be protected 
    // y will be protected
    // z will be iaccessible

};


int main(){

Parent p;
p.x;


    return 0;
}

// types of inheritance




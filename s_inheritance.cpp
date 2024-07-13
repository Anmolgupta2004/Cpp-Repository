// single Inheritance

#include<iostream>
using namespace std;

class Parent1{
    public:
    Parent1(){
        cout<<"Parent1 class"<<endl;
    }
}; 
class Parent2{
    public:
    Parent2(){
        cout<<"Parent2 class"<<endl;
    }
}; 
class Child1:public Parent1, public Parent2{
    public:
    Child1(){
        cout<<"Child1 class"<<endl;
    }
};
class Child2:public Parent1, public Parent2{
    public:
    Child2(){
        cout<<"Child2 class"<<endl;
    }
};

class GrandChild: public Child1,public Child2{
    public:
    GrandChild(){
        cout<<"Grandchild class"<<endl;
    }
};




int main(){

//Child1 c;

 GrandChild gc;
    return 0;
}

//Multiple Inheritance

// Hierachical Inheritance

// Hybrid Inheritance

// Diamond Problem

//base class has multiple classes having a Common anceston class


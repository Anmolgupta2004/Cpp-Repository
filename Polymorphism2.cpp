//Runtime Polymorphism


// resolved by runtime
//using function overriding

// chlid class define a function of parent class
#include<iostream>
using namespace std;

class Parent 
{
    public:
   virtual void print(){
        cout<<"Parent class"<<endl;

    }
    void show(){
cout<<"Parent class"<<endl;
    }
};

class Child:public Parent{
     public:
    void print(){
        cout<<"Parent class"<<endl;

    }
    void show(){
cout<<"Child class"<<endl;
    }
};
int main(){

Parent *p;
Child c;
p=&c;
p->print();
p->show();

    return 0;
}

//compile time

// through function overlording operator
//function name should be same but parameter can be diff.
// has faster exection time 
//more memory effecient
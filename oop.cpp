// procedure Orientend Programming 
// Conventional programming paredigm - use high level language -c,coble ,fortran.
// program - divided into tasks - groups into functions

//globle data -accessible from entie program 
// difficult to track which function change data
// if data stucture is changed, functions to be revised

// OOP (focus not on function only data)

//bind the data to the function using it 
// program - divided into objects(data+function) 
// its product data from accedental changes


//class  

//the fundamental unit of oop
//usser defined data types
// define some data/properties & metods/functions

//object

//variable of type class


#include<iostream>
using namespace std;

class fruit{
  public:
  string name;
  string color;
} ;

class Student{
    string name;
    int roll_no;
};

int main(){

    fruit apple;//object
    apple.name="Apple";
    apple.color="Red";

    cout<<apple.name<<" "<<apple.color<<endl;

    fruit *mango= new fruit();
    mango->name="Mango";
    mango->color="Yellow";
    cout<<mango->name<<" "<<mango->color<<endl;


    //default constructor

   
    return 0;
}
// to run code ctrl+alt+n

// Constructor 

// used to initialise an object 
// this is function which is called when an object is created
// same name as class name
// types

// default
//parameterised
//copy







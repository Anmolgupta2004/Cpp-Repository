#include<iostream>
using namespace std;


class Rectangle{
    public:
    int l;
    int b;
Rectangle(){// default constructor--no args passed
    l=0;
    b=0;
}
// destructor is called when object is deleted
// cannot pass any parameters
// name --> ~ (classname)

Rectangle(int x, int y){//  parameterised constructor --agrs pass
    l=x;
    b=y;

}

Rectangle(Rectangle& r){
  l=r.l; 
  b=r.b;
   }
   
   //copy constructor -- initialise and object by another exist object



   ~Rectangle(){// destructor
    cout<<"Destructor is called"<<endl;;
   }
};

int main(){

     Rectangle* r1=new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    Rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
   
}

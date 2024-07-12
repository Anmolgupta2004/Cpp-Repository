// binding the methods & variables  together into a single work -(class)
// how--?  data is only accessible from the class methods
//  also leads to data abstraction (hiding)  class-->Abstact data type(ADT)

#include<iostream>
using namespace std;

class ABC
{
    int x;

    public:

    void set(int n){
        x=n;
    }

    int get(){
        return x;
    }
};

int main(){

    ABC obj1;
    obj1.set(3);
    cout<<obj1.get()<<" "<<endl;

    return 0;
}
// enables us to display only essential information while hiding Inplementation details

//  eg:-->  pow(x,y)--->x ke power y


#include<iostream>
using namespace std;

class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int c){
        this->capacity=c;
        arr=new int(c);
        this->top=-1;
    }
    void push(int data){
        if(this->top==this->capacity-1){
            cout<<"Overflow"<<endl;
        }
        this->top++;
        this->arr[this->top]=data;
    }

    int pop(){
    if(this->top==-1){
        cout<<"Underflow"<<endl;
        return INT8_MIN;

    }
    this->top--;
    }


    int currentTop(){
        if(this->top==-1){
            cout<<"Underflow"<<endl;
            return INT8_MIN;

        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top==-1;
    }

    int size(){
        return this->top+1;
    }

    bool isfull(){
        return this->top==this->capacity-1;
    }
};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
   
    cout<<st.currentTop()<<endl;
     st.pop();
     st.push(4);
     st.push(5);
     cout<<st.isEmpty()<<endl;
     st.push(6);
     cout<<st.currentTop()<<endl;
     cout<<st.isfull()<<endl;
     cout<<st.size()<<endl;
     st.push(7);
     
}
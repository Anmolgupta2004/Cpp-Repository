#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }


};
class Stack{
    Node* head;
    int capacity;
    int currentsize;
     public:
    Stack(int c){
        this->capacity=c;
        this->currentsize=0;
        head=NULL;

    }
    bool isEmpty(){
        return this->head==NULL;

    }

    bool isfull(){
        return this->currentsize==this->capacity;
    }

    void push(int data){
        if(this->currentsize==this->capacity){
            cout<<"Overflow"<<endl;
            return;
        }
        Node* new_node=new Node(data);
        new_node->next=this->head;
        this->head=new_node;
        this->currentsize++;

    }

    int pop(){
        if(this->head==NULL){
            cout<<"Underflow"<<endl;
            return INT8_MIN;
        }
        Node* new_head =this->head->next;
        this->head->next=NULL;
        Node* toberemoved=this->head;
        int result =toberemoved->data;
        delete toberemoved;

        this->head=new_head;
        return result;
    }
int size(){
    return this->currentsize;
}
int currentTop(){
    if(this->head==NULL){
        cout<<"Underflow"<<endl;
        return INT8_MIN;
    }
    return this->currentsize;
}

};


int main(){

    Stack st(5);
    st.push(1);
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
// linear data struture used to store a list of values 
// memory blockes linked to each other 

// challenges of array

//static size
//contiguous memory allocation
// inseating & deleting is costly

// Advantages of a linked list over an array
//dynamic size
//non-contiguous memory allocation
// insution & deletion is non expensive

//types of linked lists

//single linked list
// every node points to it's successor node

//Double linked list 
//every  node is connected to it's previous & next node

//circular linked list
//the last node point to head node

#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next= NULL;

          
    }
};


void insertAtHead(Node* &head ,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;

}

void insertAtTail(Node* &head, int val){
    Node* new_node =new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //temp
    temp->next=new_node;

}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}



int main(){
    Node* n=new Node(1);
    cout<<n->val<<" "<<n->next<<endl;

    Node* head =NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(3);
    

    return 0;
}
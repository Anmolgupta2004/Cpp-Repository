#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};

node* buildTree(node* root){

    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;

    }
    cout<<"Enter data for inserting in left"<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right"<<endl;
    root->left=buildTree(root->right);
    return root;

}
void level0OrderTraversal(node* root){
queue<node*>q;
q.push(root);
q.push(NULL);
while(!q.empty()){
    node* temp=q.front();
    cout<<temp->data<<" "<<endl;
    q.pop();
    if(temp==NULL){
        //purana level complete traverse ho chuka h
        cout<<endl;
        if(!q.empty()){
            //queue still has some child nodes 
            q.push(NULL);
        }
    }else{
 if(temp->left){
        q.push(temp->left);
    }
    if(temp->right){
        q.push(temp->right);
    }
    }
   
}
}
void inorder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

    
}
void preorder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);

    
}
void postorder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    
    preorder(root->left);
    
    preorder(root->right);
    cout<<root->data<<" ";

    
}


int main(){

    node* root=NULL;
//creat a tree
    root=buildTree(root);
    //1 3 7 -1 11 -1 -1 17 -1 -1 -1 

    //level order
    cout<<"printing the level order tracersal output"<<endl;
level0OrderTraversal(root);


cout<<"Inorder traversal is :"<<inorder(root)<<endl;
cout<<"preorder traversal is :"<<preorder(root)<<endl;
cout<<"postorder traversal is :"<<postorder(root)<<endl;
    return 0;
}
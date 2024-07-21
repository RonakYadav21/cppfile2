#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*rigth;
    node(int data){
        this->data=data;
        left=NULL;
        rigth=NULL;
    }
};
    void display(node*root){
        cout<<"preorder";
    }

int main(){
     node*root=new node(1);
     root->left=new node(3);
     root->rigth=new node(2);
     display(root);
     
     return 0;
}

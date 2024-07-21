#include <iostream>
using namespace std;
struct node
{
    int data;
    node *right;
    node *left;
};
class bstree
{

public:
    node *root;
    bstree()
    {
        root = NULL;
    }
    void insert(int num);
    void display();
    void preorder(node *root);
    void postorder(node *);
    void inorder(node *);
    node* del(node*root,int num);
};
void bstree::insert(int num)
{
    node *temp = new node();
    temp->data = num;
    temp->left = NULL;
    temp->right = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        node *t = root;
        node *prev;
        while (t != NULL)
        {
            prev = t;
            if (t->data > num)
            {
                t = t->left;
            }
            else
            {
                t = t->right;
            }
        }
        if (prev->data > num)
        {
            prev->left = temp;
        }
        else
        {
            prev->right = temp;
        }
    }
}
void bstree::display()
{
    cout << "preorder";
    preorder(root);
    cout << endl;
    cout << "postorder";
    postorder(root);
    cout << endl;
    cout << "inorder";
    inorder(root);
    cout << endl;
}
void bstree::preorder(node *t)
{
    if (t != NULL)
    {
        cout << t->data << " ";
        preorder(t->left);
        preorder(t->right);
    }
}
void bstree::inorder(node *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }
}
void bstree::postorder(node *t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        cout << t->data << " ";
    }
}
node* bstree::del( node*root,int num){
  if(root==NULL){
  return root;
  }
  if(root->data<num){
    root->right=del(root->right,num);
    return root;
  }
  else if(root->data>num){
     root->left=del(root->left,num);
    return root;
  }
  
  if(root->left==NULL){
   node*temp=root->right;
   delete root;
   return temp;
  }
   else if (root->right==NULL){
    node*temp=root->left;
    delete root;
    return temp;
   }
   else{
    node*succparent=root;
    node*succ=succparent->right;
    while(succ->left!=NULL){
        succparent=succ;
        succ=succ->left;
    }
    if(succparent!=root){
        succparent->left=succ->right;
    }
    else{
        succparent->right=succ->right;
    }
    root->data=succ->data;
    delete succ;
    return root;
   }
}

int main()
{
    bstree b;
    b.insert(34);
    b.insert(25);
    b.insert(45);
    b.insert(55);
    b.insert(4);
    b.display();
    b.root=b.del(b.root,4);
    b.display();
    return 0;
}

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
// creat a function to creat a node
node *newnode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << endl;
        preorder(root->left);
        preorder(root->right);
    }
}
void display(node *root)
{
    cout << "preorder";
    cout << endl;
    preorder(root);
}

int main()
{
    // ctreat a new node
    node *root = new node;
    root->data = 11;
    root->left = NULL;
    root->right = NULL;
    //    cout<<root->data;
    // creat another node
    node *temp = new node;
    temp->data = 3;
    root->right = NULL;
    temp->left = NULL;
    // creat a link between the node
    root->left = temp;
    node*r= newnode(4);
    root->right = r;
    node *p = newnode(7);  /*function is called it can have other nae also*/
    temp->left = p;
    temp->right = newnode(6); /*direct linking of the node */
    display(root);
    return 0;
}
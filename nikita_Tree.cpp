/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *left,*right;
}*root=NULL;
struct node* getnewnode(int data)
{
    struct node* newnode= new node();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node* insert(struct node *root,int data)
{
	struct node *p = root;
    if(p==NULL)
    {
        p=getnewnode(data);
        root = p;
        return root;
    }
    else if(data<=p->data)
    {
        p->left=getnewnode(data);
        root = p;
    }
    else
    {
        p->right=getnewnode(data);
        root = p;
    }
    return root;
}
void inorder(struct node* root)
{
    if(root==NULL)
    {
    	cout<<"root null";
        return ;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int main()
{
    cout<<"Hello World\n";
    struct node* root;
    root=insert(root,10);
    root=insert(root,12);
    root=insert(root,6);
    root=insert(root,110);
    inorder(root);
    
    

    return 0;
}

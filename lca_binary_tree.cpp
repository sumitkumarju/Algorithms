#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node*left;
    node*right;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
//this soln has a space complexity of O(N) in function calling stack
node* lca(node* root,int n1,int n2)
{

    if(root==NULL)
       return NULL;
    else if(n1<root->data&&n2<root->data)
        return lca(root->left,n1,n2);
    else if(n1>root->data&&n2>root->data)
        return lca(root->right,n1,n2);
    else
        return root;
}
node* efficient_lca(node* root,int n1,int n2)
{
    if(root==NULL)
        return NULL;
    while(root!=NULL)
    {
        if(n1<root->data&&n2<root->data)
            root=root->left;
        else if(n1>root->data&&n2>root->data)
            root=root->right;
        else
            break;

    }
    return root;
}
int main()
{
    node *root = new node(20);
    root->left = new node(8);
    root->right = new node(22);
    root->left->left = new node(4);
    root->left->right = new node(12);
    root->left->right->left = new node(10);
    root->left->right->right = new node(14);

    node* temp;
    //temp=lca(root,10,22);
    temp=efficient_lca(root,10,22);
    cout<<temp->data;

    return 0;
}

#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

//Accepts the old root node & data and returns the new root node
node* insertInBST(node *root,int data){
    //Base Case
    if(root==NULL){
        return new node(data);
    }
    //Rec Case - Insert in the Subtree and Update Pointers
    if(data<=root->data){
        root->left = insertInBST(root->left,data);
    }
    else{
        root->right = insertInBST(root->right,data);
    }
    return root;
}

bool search(node*root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }
    //Recursively search in left and right subtree
    if(data<=root->data){
        return search(root->left,data);
    }
    else{
        return search(root->right,data);
    }
}

node* build(){
    //Read a list of numbers till -1 and also these numbers will be inserted into BST
    int d;
    cin>>d;

    node*root = NULL;

    while(d!=-1){
        root = insertInBST(root,d);
        cin>>d;
    }
    return root;
}
//Print the BST Level By Level
void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}
//Inorder Print
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<",";
    inorder(root->right);
}
node* deleteinBFS(node*root,int data)
{
    if(root==NULL)
      return NULL;
    if(data>root->data)
    {
        root->right=deleteinBFS(root->right,data);
    }
    else if(data<root->data)
    {
        root->left=deleteinBFS(root->left,data);
    }
    else
    {
        if(root->left==NULL&&root->right==NULL)
        {
            delete root;
            return NULL;
        }
        else if(root->left!=NULL&&root->right==NULL)
        {
            node* temp;
            temp=root->left;
            delete root;
            return temp;

        }
        else if(root->left==NULL&&root->right!=NULL)
        {
            node* temp;
            temp=root->right;
            delete root;
            return temp;

        }
        else
        {
            node* replace=root->right;
            while(replace->left!=NULL)
            {
                replace=replace->left;
            }
            root->data=replace->data;
            root->right=deleteinBFS(root,replace->data);
        }

    }
}

int main(){
    node*root = build();


    int s;
    cin>>s;
    root=deleteinBFS(root,s);
    inorder(root);
    bfs(root);

return 0;
}











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

node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    node* f=q.front();
    while(!q.empty()){
     f= q.front();
    if(f==NULL)
    {
        cout<<"\n";
        q.pop();
        q.push(NULL);
    }
    else
    {
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
}
int height(node*root)
{
    if(root==NULL)
     return 0;
    int l=height(root->left);
    int r=height(root->right);
    return max(l,r)+1;
}
int maxdia(node*root)
{
    if(root==NULL)
     return 0;
    int l=height(root->left);
    int r=height(root->right);
    int d1=l+r;
    int d2=maxdia(root->left);
    int d3=maxdia(root->right);
    return max(d1,max(d2,d3));
}
int sum(node*root)
{
    int temp;
    if(root==NULL)
     return 0;
    if(root->left==NULL&&root->right==NULL)
     return root->data;
    int l=sum(root->left);
    int r=sum(root->right);
    temp=root->data;
    root->data=l+r;
    return temp+root->data;

}
int main(){
    node* root = buildTree();
    //cout<<count(root)<<endl;
    //printAllLevels(root);
    bfs(root);
    cout<<"\n"<<height(root);
    cout<<"\n"<<height(root->left);
    cout<<"\n"<<height(root->right);
    cout<<"\n"<<maxdia(root);
    int temp=sum(root);
    cout<<temp<<"\n";
    bfs(root);

return 0;
}

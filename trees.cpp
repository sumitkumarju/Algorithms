#include <iostream>
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
void print(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise, print root first followed by subtrees(children)
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
    return;
}
int maxheight(node* root)
{
    if(root==NULL)
     return 0;
    int lh=maxheight(root->left);
    int rh=maxheight(root->right);
    int height=max(lh,rh)+1;
    return height;

}
int printk(node*root,int h)
{
    if(root==NULL)
     return 0;
    if(h==1)
    {
        cout<<root->data<<" ";
    }
    printk(root->left,--h);
    printk(root->right,--h);


}
int main(){
    node* root = buildTree();

    int height=maxheight(root);
    cout<<height;
    cout<<"\n";
    print(root);
    cout<<"\n";
    printk(root,2);


return 0;
}












#include <bits/stdc++.h>

using namespace std;

// A binary tree node has data,
// left child and right child
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// function that allocates a new node
// with the given data and NULL left
// and right pointers.
struct Node* newNode(int data)
{
    struct Node* node = new struct Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

// Function to modify tree
struct Node* rightmost_element(Node* root)
{
    if(root==NULL||(root->left==NULL&&root->right==NULL))
        return root;
    Node* right=rightmost_element(root->right);
    if(right)
        return right;
    else
        return rightmost_element(root->left);

};
struct Node* modifytree(struct Node* root)
{
    if(root==NULL||(root->left==NULL&&root->right==NULL))
        return root;
    if(root->left)
    {
        Node* rightmost=rightmost_element(root->left);
        Node* left =modifytree(root->left);

        rightmost->right = modifytree(root->right);
        root->right=left;
        root->left=NULL;

    }
    else
    {

        root->right=modifytree(root->right);
    }
    return root;
}


// printing using right pointer only
void printpre(struct Node* root)
{
    while (root != NULL) {
        cout << root->data << " ";
        root = root->right;
    }
}

// Driver program to test above functions
int main()
{
    /* Constructed binary tree is
         10
        / \
       8   2
      / \
     3   5     */
    struct Node* root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(2);
    root->right->left = newNode(1);
    root->right->right = newNode(5);
    root->left->left = newNode(3);
    //root->left->right = newNode(5);

    modifytree(root);
    printpre(root);

    return 0;
}

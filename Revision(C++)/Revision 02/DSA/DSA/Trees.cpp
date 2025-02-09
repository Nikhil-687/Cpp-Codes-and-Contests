#include <bits/stdc++.h>

struct Node
{
    int data;
    Node *left;
    Node *right;
} *root = NULL;

void insertBST(Node *&root, int x)
{
    if (!root)
    {
        root = new Node;
        root->data = x;
        root->left = NULL;
        root->right = NULL;
        return;
    }
    if (root->data < x)
    {
        if (root->right)
        {
            insertBST(root->right, x);
            return;
        }
        Node *newNode = new Node;
        newNode->data = x;
        root->right = newNode;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    if (root->data >= x)
    {
        if (root->left)
        {
            insertBST(root->left, x);
            return;
        }
        Node *newNode = new Node;
        newNode->data = x;
        root->left = newNode;
        newNode->left = NULL;
        newNode->right = NULL;
    }
}


void traverseInorder(Node* root){
    if(!root)return ;
    if(root->left){
        Node* left = root->left;
        traverseInorder(left);
    }
    std::cout << root->data << " ";
    if(root->right){
        Node* right = root->right;
        traverseInorder(right);
    }
}
void traversePreOrder(Node* root){
    if(!root)return ;
    std::cout << root->data << " ";
    if(root->left){
        Node* left = root->left;
        traversePreOrder(left);
    }
    if(root->right){
        Node* right = root->right;
        traversePreOrder(right);
    }
}
void traversePostOrder(Node* root){
    if(!root)return ;
    if(root->left){
        Node* left = root->left;
        traversePostOrder(left);
    }
    if(root->right){
        Node* right = root->right;
        traversePostOrder(right);
    }
    std::cout << root->data << " ";
}

int main()
{
    insertBST(root, 9);
    insertBST(root, 5);
    insertBST(root, 6);
    insertBST(root, 4);
    insertBST(root, 3);
    insertBST(root, 8);
    insertBST(root, 7);
    traverseInorder(root);
    std::cout << "\n";
    traversePreOrder(root);
    std::cout << "\n";
    traversePostOrder(root);
    std::cout << "\n";
}
#include<bits/stdc++.h>

struct Node
{
    int l = -1;
    int h = -1;
    Node * left;
    Node * mid;
    Node * right;
};
Node *root = NULL;


void insert(int key){
    if(root == NULL){
        root = new Node;
        root->l = key;
        root->left = NULL;
        root->mid = NULL;
        root->right = NULL;
    }
    Node*t = root;
    if(t->l > key){
        if(t->h == -1 && t->right == NULL && t->mid == NULL)
        {
            t->h = t->l;
            t->l = key;
            return ;
        }
        if(t->left == NULL)
        {

        }
    }
}

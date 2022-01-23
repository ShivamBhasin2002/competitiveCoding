#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(node *root, int h)
{
    if (root == NULL)
        return h - 1;
    return max(height(root->left, h + 1), height(root->right, h + 1));
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(7);
    cout << height(root, 1);
}
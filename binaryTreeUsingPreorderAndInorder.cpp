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

int search(int arr[], int l, int h, int target)
{
    for (int i = l; i <= h; i++)
        if (arr[i] == target)
            return i;
    return -1;
}

node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
        return NULL;
    node *root = new node(preorder[idx++]);
    if (start == end)
        return root;
    int pos = search(inorder, start, end, root->data);
    root->left = buildTree(preorder, inorder, start, pos - 1);
    root->right = buildTree(preorder, inorder, pos + 1, end);
    return root;
}

void printInOrder(node *root)
{
    if (root == NULL)
        return;
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    node *root = buildTree(preorder, inorder, 0, 4);
    printInOrder(root);
}
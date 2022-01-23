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

node *buildTree(int postorder[], int inorder[], int start, int end)
{
    static int idx = end;
    if (start > end)
        return NULL;
    node *root = new node(postorder[idx--]);
    if (start == end)
        return root;
    int pos = search(inorder, start, end, root->data);
    root->right = buildTree(postorder, inorder, pos + 1, end);
    root->left = buildTree(postorder, inorder, start, pos - 1);
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
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};
    node *root = buildTree(postorder, inorder, 0, 4);
    printInOrder(root);
}
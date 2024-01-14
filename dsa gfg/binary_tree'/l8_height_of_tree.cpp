#include<bits/stdc++.h>
using namespace std;

struct node
{
   int key;
   node* left;
   node* right;
   node(int k)
   {
    key=k;
    left=right=nullptr;
   }
};

int height(node* root)
{
    if(root==nullptr)
    {
        return 0;
    }
    else{
        return max(height(root->left), height(root->right)) + 1;
    }
}

int main()
{
    node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    
    int treeHeight = height(root);
    cout << "Height of the binary tree: " << treeHeight << endl;

    return 0;   
}

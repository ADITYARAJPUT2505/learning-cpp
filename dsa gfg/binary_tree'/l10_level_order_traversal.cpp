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
void printdist(node* root,int k)
{
    if(root==nullptr) return;
    if(k==0) cout<<(root->key)<<" ";
    else{
        printdist(root->left,k-1);
        printdist(root->right,k-1);
    }
}
int main()
{
    node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(70);
    root->right->right->right=new node(80);
    for(int i=0 ; i<height(root); i++)
    {
        printdist(root,i);
    }

    return 0;   
}
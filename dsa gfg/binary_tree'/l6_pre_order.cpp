#include<iostream>
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
void preorder(node* root)
{
    if(root!=nullptr)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);

    }
}
int main()
{
    node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    preorder(root);
    return 0;   
}
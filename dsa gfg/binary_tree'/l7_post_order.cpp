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
void postorder(node* root)
{
    if(root!=nullptr)
    {
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main()
{
    node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    postorder(root);
    return 0;   
}
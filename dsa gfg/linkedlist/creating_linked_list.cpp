#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node *nxt;
   node(int x)
   {
    data=x;
    nxt=NULL;
   }
};
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->nxt=temp1;
    temp1->nxt=temp2;
    return 0;
}
// node  *head=new node(10);
//   head->nxt =new node(20);
// head->nxt->nxt =new node(30);
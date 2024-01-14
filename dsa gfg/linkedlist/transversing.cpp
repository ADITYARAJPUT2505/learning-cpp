#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
void printlist( node *d)
{
    node *head=d;
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head=head->next;
    }
};
int size( node*head)
{
	node* next=head;
	int size=0;
	while(next!=NULL)
	{		
		head=head->next;
        ++size;
	}
	return size;
}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printlist(head);
    cout<<size(head);
    return 0;
}
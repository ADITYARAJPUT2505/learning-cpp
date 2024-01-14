// #include<iostream>
// using namespace std;
// struct node{
//    int data;
//    node* next;
//    node(int x)
//    {
//     data=x;
//     next=NULL;
//    }
// };
// void  printlist(node* head)
// {
//     node* curr=head;
//     while(curr!=NULL)
//     {
//         cout<<(curr->data)<<" ";
//         curr=curr->next;
//     }
// }
// node* insertbegin(node* head, int val)
// {
//     node* first=new node(val);
//     first->next=head;
//     return first;
// }
// node* insertend(node* head,int val)
// {
//      node* last=new node(val);
//      if(head==NULL)
//      {
//         return last;
//      }
//      node* curr=head;
//      while(curr->next!=NULL)
//      {
//         curr=curr->next;       
//      }
//      curr->next=last;
//      return head;
// }
// node* del(node* head)
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     else{
//         node* temp=head->next;
//         delete head;
//         return temp;
//     }
// }
// node* deltail(node* head)
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     if(head->next==NULL)
//     {
//         delete head;
//         return NULL;
//     }
//     node* curr=head;
//     while(curr->next->next!=NULL)
//     {
//         curr=curr->next;
//     }
//     delete  curr->next; 
//     curr->next=NULL;
//     return head;
// }
// node* insertpos(node*head,int index, int val)
// {
//     if(head==NULL)
//     {
//         node* head=new node(val);
//     }
// }
// int main()
// {
//      struct node*head = new node(10);
//      head=insertbegin(head,20);
//      head=insertbegin(head,20);
//      head=insertbegin(head,90);
//      head=insertend(head,100);
//      head=del(head);
//      head=deltail(head);
     
//      printlist(head);
//      return 0;
// }
#include<iostream>
using namespace std;
struct node{
   int data;
   node* next;
   node(int x)
   {
    data=x;
    next=NULL;
   }
};
void  printlist(node* head)
{
    node* curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
node* insertend(node* head,int val)
{
     node* last=new node(val);
     if(head==NULL)
     {
        return last;
     }
     node* curr=head;
     while(curr->next!=NULL)
     {
        curr=curr->next;       
     }
     curr->next=last;
     return head;
}
node* del(node* head, int pos)
{
    if (pos == 1)
    {
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    node* curr = head;
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    
    if (curr == NULL || curr->next == NULL)
    {
        return head;
    }
    
    node* temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    
    return head;
}

 int main()

{
    

    int n;
    cin >> n;
    node* head = NULL; // Initialize head outside the loop
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        head = insertend(head, val); // Add elements to the list using insertend function
    }
    printlist(head); // Print the list
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"enter a no."<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ; i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ; i<n ;i++)
    {
        for(int j=i ; j<n ; j++)
        {  
            if(arr[i]>arr[j])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    // int m;
    // for(int i=0 ;i<n ;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    int first=0 , last=n ,mid,no;
    cout<<"write a no to search"<<endl;
    cin>>no;
    
    for(int i=0 ; i<n ; i++)
    {   
        mid=(first+last)/2;
    if(arr[mid]==no)
    {
        cout<<mid<<endl;
        break;
    }
    if(no<arr[mid])
    {
        last=mid-1;
    }
    if(no>arr[mid])
    {
        first=mid+1;
    }
    else{
        cout<<"-1"<<endl;
    }
    }
    return 0;
}
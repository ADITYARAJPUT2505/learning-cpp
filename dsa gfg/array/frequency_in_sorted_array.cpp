#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void frequency(int arr[],int n)
{   
    int count=1;
    sort(arr,arr+n);
    for(int i=0 ; i<n-1 ; i++)
    {
        if(arr[i]==arr[i+1])
        {
           ++count;
        }
        else if(arr[i]!=arr[i+1])
        {  
            cout<<arr[i]<<" "<<count<<endl;
            count=1;
        }           
    }  
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ; i++)
    {
        cin>>arr[i];
    }
    frequency(arr,n);
    return 0;
}
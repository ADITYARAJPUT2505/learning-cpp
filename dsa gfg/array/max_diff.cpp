#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maximum(int arr[] ,int n)
{   int min=INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if((arr[j]-arr[i])>min )
            {
                min=abs(arr[i]-arr[j]);
            }
        }
    }
    return min;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ;  i<n ; i++)
    {
        cin>>a[i];
    }
    cout<<maximum(a,n);
    return 0;
}

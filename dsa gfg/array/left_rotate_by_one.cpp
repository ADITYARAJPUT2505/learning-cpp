#include<iostream>
using namespace std;
void leftrotateone(int arr[], int n)
{
     int temp=arr[0];
     for(int i=1 ; i<n ; i++)
     {
        arr[i-1]=arr[i];
     }
     arr[n-1]=temp;
}
void leftrotate(int arr[], int n, int d)
{
    for(int i=0 ; i<d ; i++)
    {
        leftrotateone(arr ,n);
    }
}
int main()
{
    int a;
    cin>>a;
    int d=2;
    int arr[a];
    for(int i=0 ; i<a ; i++)
    {
        cin>>arr[i];
    }
    leftrotate(arr,a,d);
    for(int t=0 ; t<a ;t++)
    {
        cout<<arr[t]<<" ";
    }
    return 0;
}
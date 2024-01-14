#include<iostream>
using namespace std;
bool sortedarray(int arr[], int n )
{
     for(int i=0 ; i<n-1 ; i++)
     {
        if(arr[i+1]<arr[i])
        {
            return false;
        }
        
     }
     return true;
}
int main()
{
    int p;
    cin>>p;
    int arr[p];
    for(int i=0 ; i<p ; i++)
    {
        cin>>arr[i];
    }
    bool is_sorted=sortedarray(arr , p);
    if(is_sorted)
    {
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}
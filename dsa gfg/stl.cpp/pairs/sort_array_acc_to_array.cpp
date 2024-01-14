//see copy for example
#include<bits/stdc++.h>
using namespace std;
void sortchar(int a[],char b[],int n)
{
    pair<int , char>pa[n];
    for(int i=0 ; i<n ; i++)
    pa[i]={a[i],b[i]};
    sort(pa,pa+n);
    for(int i=0 ; i<n ; i++)
    cout<<pa[i].second<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n]; 
    char b[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i]>>b[i];
    }
    sortchar(a,b,n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int maxpieces(int n , int a , int b, int c)
{
    if(n==0) return 0;
    if(n<0) return -1;
    int res= max(maxpieces(n-a , a , b ,c), max(maxpieces(n-b , a , b ,c),maxpieces(n-c , a , b ,c)  ) );
    if(res==-1) return -1;
    else return res+1;
}
int main()
{
    int n,a,b,c;
    n=9 ;a=2;b=2;c=2;
    cout<<maxpieces(n,a,b,c);
    return 0;
}
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==0)
   {
    return ;
   }
   fun(n/2);
   cout<<n%2;
}
int main()
{
    int t;
    cin>>t;
    fun(t);
    return 0;
}

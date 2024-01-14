//comparision of pairs
#include<iostream>
using namespace std;
int main()
{   //compare first element than compare second
    pair<int,int>p1(10,20);
    pair<int,int>p2(10,21);
    cout<<(p1==p2)<<endl;
    cout<<(p1!=p2)<<endl;
    cout<<(p1>p2)<<endl;
    cout<<(p1<p2)<<endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{  //best way to declare btw some other ways written in copy
    vector<string>v{"aditya","rajput"};
    
    for( string x:v)
       cout<<x<<" ";
       return 0;
}
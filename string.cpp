#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{  //erase mein syntax denge erase.s1(3 , 3) kis character se kha tk erase krna hai
    // covert into upper case
    // string str="qwertytuijnbdASDFGH";
    // int i=0;
    //  for( i=0 ; i<str.size() ; i++)
    // {
    //    if(str[i]>= 'a' && str[i]<= 'z')
    //    {
    //     str[i]-=32;
    //    }
    //    cout<<str[i];
    // }
    string s="wewertgvcxxv";
    transform(s.begin() , s.end() , s.begin() , ::toupper );
    cout<<s;
    return 0;
    
    

}
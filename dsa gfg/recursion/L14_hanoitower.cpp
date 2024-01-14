// #include<bits/stdc++.h>
// using namespace std;
// void toh(int n,char a,char b,char c)
// {
//     if(n==1)
//     {
//         cout<<"move 1 from "<<a<<" to "<<c<<endl;
//         return ;
//     }
//     toh(n-1,a,c,b);
//     cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
//     toh(n-1,b,a,c);

// }
// int main()
// {
//    int n=10; 
//    char source='A',auxiliary='B',ddestination='C';
//    cout<<"no of movements = "<<pow(2,n)-1<<endl;
//    toh(n,source,auxiliary,ddestination);
//    return 0;
// }
#include<iostream>
using namespace std;
int fibo(int n)
{
     if(n<=1)
     {
        return n;
     }
     else
     {
        return fibo(n-1)+fibo(n-2);
     }
}
void print(int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<fibo(i)<<" ";
    }
}

int main()
{
    int n=10;
    print(n);
    return 0;
    
}
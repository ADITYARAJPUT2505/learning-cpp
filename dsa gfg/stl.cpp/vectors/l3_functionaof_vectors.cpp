#include<iostream>
#include<vector>
using namespace std;
// int main()
// {  
//     vector<int>v{10,5,20};
//     v.pop_back();
   
//        cout<<v.front()<<" ";
//        cout<<v.back()<<" ";
//        return 0;
// }
//insertion
int main()
{
    vector<int>v{10,5,20};
    v.insert(v.begin(),100);
    v.insert(v.begin()+2,100);//insert at position 2
    v.insert(v.begin(),2,100);//insert  100 2 times in the beginning
    cout<<v.capacity()<<endl;
    for(int x: v)
       cout<<x<<" ";
       return 0;

}
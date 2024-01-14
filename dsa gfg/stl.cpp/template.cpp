 #include<iostream>
using namespace std;
// int main()
// {
//    cout<<"hello  world"<<endl;
// }


template<typename T>
T mymax(T x , T y)
{
  return(x>y)? x:y;
}
int main()
{
    cout<<mymax<int>(3,7)<<endl;
    cout<<mymax<char>('c', 'g')<<endl;
    return 0;
}

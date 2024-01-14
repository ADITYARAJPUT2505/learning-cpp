#include <iostream>
using namespace std;
void jut(int x)
{
    if (x > 0)
    {

    
        jut(x - 1);
    printf("%d", x);
    jut(x - 1);}
}
int main()
{
    jut(4);
    return 0;
}

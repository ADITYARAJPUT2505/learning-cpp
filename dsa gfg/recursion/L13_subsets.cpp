// #include<iostream>
// using namespace std;
// void subsets(string s , string curr="", int i=0)
// {
//     if(i==s.length())
//     {
//         cout<<s<<endl;
//         return ;
//     }
//     subsets(s,curr,i+1);
//     subsets(s,curr+s[i],i+1);
// }
// int main()
// {
//     string str,curr;
//     str={"abc"};    
//     subsets(str);
//     return 0;
// }
#include <iostream>
using namespace std;

void subsets(string s, string curr = "", int i = 0) {
    if (i == s.length()) {
        cout << curr << endl;
        return;
    }
    subsets(s, curr, i + 1);        // Subset without current character
    subsets(s, curr + s[i], i + 1); // Subset with current character
}

int main() {
    string str = "abc";
    for (int i = 0; i < str.length(); i++) {
        subsets(str, string(1, str[i]), i + 1);
    }
    return 0;
}

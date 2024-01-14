// #include <iostream>
// #include <stack>
// #include <string>
// #include <algorithm>
// using namespace std;

// int postfix(string exp) {
//     stack<int> s;
//     for (int i = 0; i < exp.length(); i++) {
//         char c = exp[i];
//         if (c!='+' && c!='-' && c!='*' && c!='/') {        
//             int a = c - '0';
//             s.push(a);
//         } else if (c != ' ') {
//             int o2 = s.top();
//             s.pop();
//             int o1 = s.top();

//             s.pop();
//             int result;
//             switch (c) {
//                 case '+':
//                     result = o1 + o2;
//                     break;
//                 case '-':
//                     result = o1 - o2;
//                     break;
//                 case '*':
//                     result = o1 * o2;
//                     break;
//                 case '/':
//                     result = o1 / o2;
//                     break;
//                 default:
//                     cout << "Invalid expression" << endl;
//                     exit(EXIT_FAILURE);
//             }
//             s.push(result);
//         }
//     }
//     return s.top();
// }

// int prefix(string exp) {
//     stack<int> s;
//    for (int i = 0; i < exp.length(); i++) {
//         char c = exp[i];
//       if (c!='+' && c!='-' && c!='*' && c!='/') {        
//             int a = c - '0';
//             s.push(a);
//         } else if (c != ' ') {
//             int o1 = s.top();
//             s.pop();
//             int o2 = s.top();
//             s.pop();
//             int result;
//             switch (c) {
//                 case '+':
//                     result = o1 + o2;
//                     break;
//                 case '-':
//                     result = o1 - o2;
//                     break;
//                 case '*':
//                     result = o1 * o2;
//                     break;
//                 case '/':
//                     result = o1 / o2;
//                     break;
//                 default:
//                     cout << "Invalid expression" << endl;
//                     exit(EXIT_FAILURE);
//             }
//             s.push(result);
//         }
//     }
//     return s.top();
// }

// int main() {
//     string exp;
//     cout << "Enter the expression: ";
//     getline(cin, exp);
//     char first = exp[0];
//     bool isPostfix = (first == '+' || first == '-' || first == '*' || first == '/');
//     int result;
//     if (isPostfix) {
//         reverse(exp.begin(), exp.end());
//         result = prefix(exp);
//     } else {
       
//         result = postfix(exp);
//     }
//     cout << "Result: " << result << endl;
//     return 0;
// }

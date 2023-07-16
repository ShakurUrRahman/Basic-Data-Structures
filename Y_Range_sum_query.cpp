// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int Q;
//     cin >> Q;

//     queue<string> line;

//     while (Q--) {
//         int command;
//         cin >> command;

//         if (command == 0) {
//             string name;
//             cin >> name;
//             line.push(name);
//         } else if (command == 1) {
//             if (!line.empty()) {
//                 cout << line.front() << endl;
//                 line.pop();
//             } else {
//                 cout << "Invalid" << endl;
//             }
//         }
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// bool isValid(string s) {
//     stack<char> letter;

//     for (char ch : s) {
//         if ((ch == 'A' && !letter.empty() && letter.top() == 'B') || (ch == 'B' && !letter.empty() && letter.top() == 'A')) {
//             letter.pop();
//         } else {
//             letter.push(ch);
//         }
//     }

//     return letter.empty();
// }

// int main() {
//     int T;
//     cin >> T;

//     for (int i = 0; i < T; i++) {
//         string s;
//         cin >> s;

//         if (isValid(s)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
#include <iostream>
#include <stack>
using namespace std;

char mixColors(char color1, char color2) {
    if (color1 == 'R' && color2 == 'B')
        return 'P';
    if (color1 == 'R' && color2 == 'G')
        return 'Y';
    if (color1 == 'B' && color2 == 'G')
        return 'C';
    if (color1 == 'B' && color2 == 'R')
        return 'P';
    if (color1 == 'G' && color2 == 'R')
        return 'Y';
    if (color1 == 'G' && color2 == 'B')
        return 'C';
    return color1;
}

string getFinalColors(const string& colors) {
    stack<char> stk;

    for (char color : colors) {
        if (!stk.empty() && stk.top() == color) {
            stk.pop();
        } else {
            stk.push(color);
        }

        if (stk.size() >= 2) {
            char topColor = stk.top();
            stk.pop();
            char secondColor = stk.top();
            stk.pop();
            char mixedColor = mixColors(topColor, secondColor);
            stk.push(mixedColor);
        }
    }

    string finalColors;
    while (!stk.empty()) {
        finalColors = stk.top() + finalColors;
        stk.pop();
    }

    return finalColors;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        string colors;
        cin >> colors;

        string finalColors = getFinalColors(colors);
        cout << finalColors << endl;
    }

    return 0;
}

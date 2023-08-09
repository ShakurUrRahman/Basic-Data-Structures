// #include<bits/stdc++.h>
// using namespace std;


// void countOccurrences(const string& S) {
//     const int size = 26;
//     vector<int> occurrences(size, 0);

//     for (char ch : S) {
//         occurrences[ch - 'a']++;
//     }

//     for (int i = 0; i < size; ++i) {
//         if (occurrences[i] > 0) {
//             char letter = static_cast<char>('a' + i);
//             cout << letter << " : " << occurrences[i] << endl;
//         }
//     }
// }

// int main() {
//     string S;
//     cin >> S;

//     countOccurrences(S);

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int size = 26;
    vector<int> times(size, 0);
   for (char ch : S) {
        times[ch - 'a']++;
    }
   for (int i = 0; i < size; ++i) {
        if (times[i] > 0) {
            char letter = ('a' + i);
            cout << letter << " : " << times[i] << endl;
        }
    }
   
    return 0;
}
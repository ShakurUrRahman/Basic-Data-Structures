// #include<bits/stdc++.h>
// using namespace std;


//     int countArray(vector<int> A)
//     {
//         int count = 0;
//         for (int i = 0; i < A.size(); ++i) {
//         if (find(A.begin(), A.end(), A[i] + 1) != A.end()) {
//           ++count;
//         }
//     }
//         return count;
//     }

//     int main() {
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }
//     int result = countArray(A);
//     cout << result << endl;
//     return 0;
//     }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >>A[i];
    }
   int count = 0;
   for (int i = 0; i < N; i++)
   {
       if (find(A.begin(), A.end(), A[i] + 1) != A.end()) {
          count++;
        }
   }
   cout<<count;
    
    return 0;
}
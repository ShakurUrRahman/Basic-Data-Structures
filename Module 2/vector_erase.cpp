#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={1,2,3,4,5};
    // a.erase(a.begin()+3);
    // a.erase(a.begin()+2, a.begin()+4);
    a.erase(a.begin()+2, a.end());
    for(int x:a){
        cout<<x<<" ";
    }
    return 0;
}
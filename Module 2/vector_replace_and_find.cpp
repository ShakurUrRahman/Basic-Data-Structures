#include<bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    // vector<int> v={1,2,2,3,4,5,5,5,6,7,7,2};
    // replace(v.begin(),v.end()-1, 2, 100);
    // for(int x:v){
    //     cout<<x<<" ";
    // }
    // find
    vector<int> v={1,2,2,3,4,5,5,5,6,7,7,2};

    auto it=find(v.begin(), v.end(),100);
    if(it == v.end()) cout<<"Not found";
    else cout<<"Found";
    return 0;
}
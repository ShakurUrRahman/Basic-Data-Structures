#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={10, 20 ,30};
    a.pop_back();
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    // vector<int> b={100, 200 ,300, 500};
    // a=b;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.max_size();
    // cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    // v.clear();
    v.resize(2);
    v.resize(7, 50);
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
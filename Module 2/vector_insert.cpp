#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a={1,2,3,4,5,6};
    vector<int> a2={10,20,30,40,50,60};
    a.insert(a.begin()+2,a2.begin(), a2.end());
    for(int v:a){
        cout<<v<<" ";
    }
    return 0;
}
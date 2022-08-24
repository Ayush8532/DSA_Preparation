#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mx=INT_MIN;
    cin>>n;
    vector<int>v;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,v[i]);
        v1.push_back(mx);
    }
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
}
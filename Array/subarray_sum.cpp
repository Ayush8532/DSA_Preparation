#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
    {
        sum=0;
        for(int j=i;j<v.size();j++)
        {
            sum+=v[j];
            cout<<sum<<endl;
        }
    }
}
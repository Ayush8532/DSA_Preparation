#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    v[n]=-1;
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    int prev_greater=-1,count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>prev_greater && v[i]>v[i+1])
        {
            count++;
            prev_greater=v[i];
        }
    }
    cout<<count;
    return 0;
}
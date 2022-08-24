/**
N=6
a[]=0 -9 1 3 -4 5

output=2 
 **/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=-1;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }   
    vector<bool>v1;
    for(int i=0;i<n;i++)
    {
        v1.push_back(false);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]>=0)
        {
            v1[v[i]]=true;
        }   
    }
    for(int i=1;i<n;i++)
    {
        if(v1[i]==false)
        {
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int  pd=v[1]-v[0];
    int ans=2,mx,curr=2;
    for(int j=2;j<v.size();j++)
    {
        if(pd==v[j]-v[j-1])
        {
            curr++;
        }
        else{
            pd=v[j]-v[j-1];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
    }
    return 0;
}

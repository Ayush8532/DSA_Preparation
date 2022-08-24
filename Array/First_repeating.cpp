/**
 7
 1 5 3 4 3 5 6 
 output- 2 (because of 5 first number repeating)  
 **/ 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    vector<int>v2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        v2.push_back(-1);
    }
    int mindx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(v2[v[i]]!=-1)
        {
            mindx=min(mindx,v2[v[i]]);
        }
        else{
            v2[v[i]]=i;
        }
    }
    if(mindx==INT_MAX)
    {
        cout<<"-1";
    }
    else{
        cout<<mindx+1;
    }
    return 0;
}
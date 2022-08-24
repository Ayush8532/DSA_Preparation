#include<bits/stdc++.h>
using namespace std;

vector<int> insertion(vector<int>&v,int n)
{
    for(int i=1;i<v.size();i++)
    {
        int current=v[i];
        int j=i-1;
        while(v[j]>current && j>=0)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current;
    }
    return v;
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    insertion(v,n);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
}
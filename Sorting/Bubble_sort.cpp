#include<bits/stdc++.h>
using namespace std;

vector<int> bubble(vector<int>&v,int n)
{
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(v[i]>v[i+1])
            {
               int temp=v[i];
               v[i]=v[i+1];
               v[i+1]=temp;
            }
        }
        counter++;
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
    bubble(v,n);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
}
#include<bits/stdc++.h>
using namespace std;

vector<int> selection(vector<int>&v,int n)
{
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
            {
                int temp=v[j];
                v[j]=v[i];
                v[i]=temp;
            }
        }
    }
    return v;

}
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
   selection(v,n);
   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }
}
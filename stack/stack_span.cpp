#include<bits/stdc++.h>
using namespace std;

void stockspan(int a[],int n)
{
    stack<pair<int,int>>s;
    vector<int>v;
    for(int i=n-1;i>=0;i--){
        if(s.size()==0)
        {
            v.push_back(i);
        }
        else if(s.size()>0 && s.top().first>a[i])
        {
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=a[i])
        {
            while(s.size()>0 && s.top().first<=a[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(i);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({a[i],i});
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        v[i]=v[i]-i;
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<" "<<v[i];
    }
}
int main()
{
    int a[]={73,74,75,71,69,72,76,73};
    int n=8;
    stockspan(a,8);
    return 0;
}
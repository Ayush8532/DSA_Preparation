#include<bits/stdc++.h>
using namespace std;

void nsleft(int a[],int n)
{
    stack<int>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()<a[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>a[i])
        {
            while(s.size()>0 && s.top()>a[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int a[]={3,4,5,2,6};
    int n=5;
    nsleft(a,5);
    return 0;
}
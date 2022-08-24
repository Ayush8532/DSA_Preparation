#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
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
        int ij=INT_MIN;
        int pos=0; 
        for(int i=0;i<n;i++)
        {
            if(v[i]>i){ij=v[i];pos=i;}
        }
        if(v.size()==2)cout<<1<<endl;
        else if(pos==0 || pos==v.size()-1)cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,6,6,6,8,9};
    int ele=6;
    int start=0;
    int end=v.size()-1;
    int mid,res;
    
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(ele==v[mid])
        {
            res=mid;
            end=mid-1;
            cout<<"First occurrence "<<res;
            return res;
        }
        else if(ele<v[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
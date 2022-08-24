#include<bits/stdc++.h>
using namespace std;
int last(vector<int>&v,int n)
{
    int start=0;
    int end=n-1;
    int mid;
    if(v[start]<v[end])
    {
        return start;
    }
    while(start<=end)
    {
        mid=start+(end-start)/2;
        int pre=(mid-1+n)%n;
        int next=(mid+1)%n;
        if(v[pre]>=v[mid] &&v[mid]<=v[pre])
        {
            return mid;
        }
        else if(v[mid]<=v[end])
        {
            end=mid-1;
        }
        else if(v[mid]>=v[start])
        {
            start=mid+1;
        }
    }
    return 0;
}
int main()
{
    vector<int>v={4,5,6,7,8,1,2,3};
    int n=v.size();
    int t=last(v,n);
    cout<<t;
    return 0;
}
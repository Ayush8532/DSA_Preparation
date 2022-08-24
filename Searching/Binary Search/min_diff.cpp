#include<bits/stdc++.h>
using namespace std;
int difference(vector<int>&v,int start,int end,int key)
{
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(v[mid]==key)
        {
            return v[mid];
        }
        else if(key<v[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    int lowval=abs(v[start]-key);
    int highval=abs(v[end]-key);
    if(lowval>highval)
    {
        return v[end];
    }
    return v[start];
}
int main()
{
    vector<int>v={1,3,6,9,12,20};
    int key=17;
    int start=0,end=v.size()-1;
    int ans=difference(v,start,end,key);
    cout<<"the answer is "<<ans;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int nsorted(vector<int>&v,int target,int start,int end)
{
    if(start<=end)
    {
        int mid=start+(end-start)/2;
        if(v[mid]==target)
            return mid;
        if(mid>=start && v[mid-1]==target)
            return (mid-1);
        if(mid<=end && v[mid+1]==target)
            return (mid+1);
        if(target<v[mid])
            return nsorted(v,target,start,mid-2);
        return nsorted(v,target,mid+2,end);
    }
    return -1;
}
int main()
{
    vector<int>v={3,2,10,4,40};
    int n=v.size();
    int target;
    cin>>target;
    int start=0,end=n-1;
    int result=nsorted(v,target,0,n-1);
    if(result!=-1)
    {
        cout<<"Item is at "<<result;
    }
    else{
        cout<<"Not found";
    }
    return 0;

}

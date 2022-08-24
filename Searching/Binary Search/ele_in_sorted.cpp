#include<bits/stdc++.h>
using namespace std;

int binaryS(vector<int>&v,int target,int start,int end)
{
    int mid;
    if(end<start)
        return -1;
    mid=start+(end-start)/2;
    if(v[mid]==target)
    {
        return mid;
    }
    if(target>v[mid])
        return binaryS(v,target,(mid+1),end);
    else{
        return binaryS(v,target,start,(mid-1));
    }
}

int findpivot(vector<int>&v,int start,int end)
{
    if(end<start)
        return -1;
    if(start==end)
        return start;
    int mid=start+(end-start)/2;
    if(mid<end && v[mid]>v[mid+1])
    {
        return mid;
    }
    if(mid>start && v[mid]<v[mid-1])
    {
        return (mid-1);
    }
    if(v[start]>=v[mid])
        return findpivot(v,start,end-1);
    return findpivot(v,mid+1,end);
}
int pivotBs(vector<int>v,int n,int target)
{
    int pivot=findpivot(v,0,n-1);
    if(pivot==-1)
    {
        return binaryS(v,target,0,n-1);
    }
    if(v[pivot]==target)
    {
        return pivot;
    }
    if(v[0]<=target)
    {
        return binaryS(v,target,0,pivot-1);
    }
    return binaryS(v,target,pivot+1,n-1);
}
int main()
{
    vector<int>v={4,5,6,7,8,1,2,3};
    int n=v.size();
    int target=5;
    int start=0,end=n-1;
    cout<<"Index is "<< pivotBs(v,n,target);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int asbinaryS(vector<int>&v,int start,int end,int target)
{
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(v[mid]==target)
        {
            return mid;
        }
        else if(v[mid]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int desbinaryS(vector<int>&v,int start,int end,int target)
{
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(v[mid]==target)
        {
            return mid;
        }
        else if(v[mid]>target)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
//To find Peak element---------------------
int peakele(vector<int>&v,int start,int end)

{

    if(end<start)
        return -1;
    while(end>=start)
    {
        int mid=start+(end-start)/2;
        if(mid>0 &&mid<end)
        {
            if(v[mid]>v[mid-1]&& v[mid]>v[mid+1])
            {
                return mid;
            }
            else if(v[mid-1]>v[mid])
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else if(mid==0)
        {
            if(v[0]>=v[1])
            {
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid==end)
        {
            if(v[end]>=v[end-1])
            {
                return end;
            }
            else{
                return end-1;
            }
        }
    }
    return -1;
}
int findele(vector<int>&v,int n ,int target,int ans)
{
    if(target>v[ans])
    {
        return -1;
    }
    else if(target==v[ans])
    {
        return ans;
    }
    else
    {
        int temp=asbinaryS(v,0,ans-1,target);
        if(temp!=-1)
        {
            return temp;
        }
        else{
            return desbinaryS(v,ans+1,n-1,target);
        }
    }
}
int main(){
    vector<int>v={3,4,10,12,8,6,4,3,2,1};
    int start=0,end=v.size()-1;
    int ans=peakele(v,start,end);
    int n=v.size();
    int target=22;
    int val=findele(v,n,target,ans);
    if(val==-1)
    {
        cout<<"Not found";
    }
    else{
        cout<<"Found at "<<val;
    }
    return 0;
}
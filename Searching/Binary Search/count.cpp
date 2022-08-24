#include<bits/stdc++.h>
using namespace std;
int first(vector<int>&v,int ele)
{
    int start=0;
    int end=v.size()-1;
    int mid,res=-1;
    
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(ele==v[mid])
        {
            res=mid;
            end=mid-1;
        }
        else if(ele<v[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return res;
}
int last(vector<int>&v,int ele)
{
    int start=0;
    int end=v.size()-1;
    int mid,res=-1;
    
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(ele==v[mid])
        {
            res=mid;
            start=mid+1;
        }
        else if(ele<v[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return res;
}
int main()
{
    vector<int>v={1,2,3,4,5,5,6,6,8,9};
    int ele=6;
    int f=first(v,ele);
    int l=last(v,ele);
    int occ=l-f+1;
    if(f==-1 &&l==-1)
    {
        cout<<"Element is not present";
    }
    else{
        cout<<"Total occurrence is "<<occ;
    }
    return 0;

}
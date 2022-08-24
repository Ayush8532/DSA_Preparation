#include<bits/stdc++.h>
using namespace std;
int fvalue(vector<int>&v ,int key,int start,int end)
{
    int result;
    if(start>end)
    {
        return -1;
    }
    int mid=start+(end-start)/2;
    if(v[mid]==key)
    {
        return v[mid];
    }
    if(start<=mid &&v[mid]<key)
    {
        result=v[mid];
        start=mid+1;
    }
    else if(end>=mid && v[mid]>key)
    {
        end=mid-1;
    }
    return result;
}
int main()
{
    vector<int>v={1,2,3,4,6,7,9};
    int n=v.size();
    int key=5;
    int start=0,end=n-1;
    int t=fvalue(v,key,start,end);
    cout<<"THe floor value is "<<t;
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int cvalue(vector<int>&v ,int key,int start,int end)
{
    int result,mid;
    if(start>end)
    {
        return -1;
    }
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(v[mid]==key)
        {
            return v[mid];
        }
        else if(v[mid]>=key)
        {
            result=v[mid];
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return result;
}
int main()
{
    vector<int>v={1,2,3,4,6,7,9};
    int n=v.size();
    int key=5;
    int start=0,end=n-1;
    int t=cvalue(v,key,start,end);
    cout<<"THe ceil value is "<<t;
    return 0;

}
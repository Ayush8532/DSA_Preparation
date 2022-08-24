#include<bits/stdc++.h>
using namespace std;
char cvalue(vector<char>&v,char key,int start,int end)
{
    char result;
    int mid;
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
    vector<char>v={'a','c','d','e','g','h'};
    int n=v.size();
    char key='f';
    int start=0,end=n-1;
    char t=cvalue(v,key,start,end);
    cout<<"THe ceil value is "<<t;
    return 0;

}
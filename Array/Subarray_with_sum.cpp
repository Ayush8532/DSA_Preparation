/**
N=5,Sum=12
a[]=1 2 3 7 5

output=2 4
 **/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,start=-1,end=-1;
    cin>>n;
    int sum;
    cin>>sum;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0,j=0,curr_sum=0;
    while(j<n &&curr_sum+v[j]<=sum)
    {
        curr_sum+=v[j];
        j++;
    }
    if(curr_sum==sum)
    {
        cout<<i+1<<" "<<j;
        return 0;
    }
    while(j<n)
    {
        curr_sum+=v[j];
        while(curr_sum>sum)
        {
            curr_sum-=v[i];
            i++;
        }
        if(curr_sum==sum)
        {
            start=i+1;
            end=j+1;
            break;
        }
        j++;
    }
    cout<<start<<" "<<end;
    return 0;
}
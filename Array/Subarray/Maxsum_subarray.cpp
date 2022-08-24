#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int curr_sum=0,max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        curr_sum+=a[i];
        max_sum=max(curr_sum,max_sum);
        if(curr_sum<0)
        {
            curr_sum=0;
        }  
    }
    cout<<max_sum;
    return 0;
}
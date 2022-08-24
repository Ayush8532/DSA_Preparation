#include<bits/stdc++.h>
using namespace std;

int kadane(int a[],int n)
{
    int curr_sum=a[0],max_sum=a[0];
    for(int i=1;i<n;i++)
    {
        curr_sum=max(a[i],curr_sum+a[i]);
        max_sum=max(max_sum,curr_sum);

    }
    return max_sum;
}
int main(){
    int n,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int wrapsum;
    int nonwrap=kadane(a,n);
    if(nonwrap<0)
    {
        cout<<nonwrap;
        return nonwrap;
    }
    int total_sum=0;
    for(int i=0;i<n;i++)
    {
        total_sum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=total_sum+kadane(a,n);
    cout<<max(wrapsum,nonwrap);
    return 0;
}

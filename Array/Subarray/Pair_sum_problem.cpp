#include<bits/stdc++.h>
using namespace std;

bool pairSum(int a[],int n,int sum){
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(a[low]+a[high]==sum)
        {
            cout<<low<<" "<<high;
            return true;
        }
        else if(a[low]+a[high]>sum)
        {
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main()
{
    int n,sum;
    cin>>n;
    cin>>sum;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<pairSum(a,n,sum)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int totalsum(int arr[],int size)
{
    if(size==0)
    {
        return arr[0];
    }
    int sum=arr[size]+totalsum(arr,size-1);
    return sum;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size=4;
    int ans=totalsum(arr,size);
    cout<<ans;
    return 0;
}
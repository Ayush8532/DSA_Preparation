#include<bits/stdc++.h>
using namespace std;
int area(vector<int>&height)
{
    int n=height.size();
    int left[n];
    int right[n];
    int sum=0;
    left[0]=height[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],height[i]);
    }
    right[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],height[i]);
    }
    int water=0;
    for(int i=0;i<n;i++)
    {
        water+=min(left[i],right[i])-height[i];
    }
    return water;
}
int main()
{
    vector<int>height={3,0,0,2,0,4};
    cout<<"The sum is "<<area(height);
    
}
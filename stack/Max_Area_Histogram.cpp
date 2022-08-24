#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>&heights)
{
    int n=heights.size();
    vector<int>left(n);
    vector<int>right(n);
    stack<pair<int,int>>st;
    int ans = INT_MIN;
    for (int i=n-1; i>=0;i--)
    {
        while (!st.empty() && st.top().first>= heights[i])
            st.pop();
        if (st.empty())
            right[i]= n;
        else
            right[i]= st.top().second;

        st.push({heights[i],i});
    }
    while(!st.empty())
    {
        st.pop();
    }
    for (int i =0; i <n; i++)
    {
        while (!st.empty() && st.top().first>= heights[i])
            st.pop();
        if (st.empty())
            left[i]= -1;
        else
            left[i]= st.top().second;

        st.push({heights[i],i});
    }
    for(int i=0;i<n;i++)
    {
        ans=max(ans,(right[i]-left[i]-1)*(heights[i]));
    }
    return ans;  
}
int main()
{
    vector<int> heights= {2, 1, 5, 6, 2, 3};
    cout<<"Max Area is "<<largestRectangleArea(heights);
}

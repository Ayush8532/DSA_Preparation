#include<bits/stdc++.h>
using namespace std;
int histoArea(vector<int>&height)
{
    int n=height.size();
    vector<int>left(n);
    vector<int>right(n);
    int pseudol=-1;
    int pseudor=n;
    int mx=INT_MIN;
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && height[st.top()]>=height[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            right[i]=pseudor;
        }
        else{
            right[i]=st.top();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        st.pop();
    }
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && height[st.top()]>=height[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            left[i]=pseudol;
        }
        else{
            left[i]=st.top();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,(right[i]-left[i]-1)*(height[i]));
    }
    return mx;
}
int maxArea(vector<vector<int> >&row)
{
    int mx=0;
    int r=row.size();
    if(!r) return 0;
    int c=row[0].size();
    vector<int>answer(c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(row[i][j]==0)
            {
                answer[j]=0;
            }
            else{
                answer[j]=answer[j]+row[i][j];
            }
        }
        mx=max(mx,histoArea(answer));
    }
    return mx;
}
int main()
{
    vector<vector<int> >height{{1,0,1,0,0},{1,0,1,1,1},{1,1,1,1,1},{1,0,0,1,0}};
    cout<<maxArea(height);
    return 0;
}
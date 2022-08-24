#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col,col1,x;
    cin>>row>>col>>col1;
   vector<vector<int>>v(row,vector<int>(col));
   vector<vector<int>>v1(col,vector<int>(col1));
   vector<vector<int>>answer(row,vector<int>(col1));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>x;
            v[i][j]=x;
        }
    }
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>x;
            v1[i][j]=x;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col1;j++)
        {
            answer[i][j]=0;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col1;j++)
        {
            for(int k=0;k<col;k++)
            {
                answer[i][j]+=v[i][k]*v1[k][j];
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<answer[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
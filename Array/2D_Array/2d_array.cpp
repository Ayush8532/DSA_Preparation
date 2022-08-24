#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col,search,x;
    cin>>row>>col>>search;
   vector<vector<int>>v(row,vector<int>(col));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>x;
            v[i][j]=x;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    bool flag=false;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(v[i][j]==search)
            {
                cout<<"Found at ["<<i<<","<<j<<"]\n";
                flag=true;
            }
        }
    }
    if(flag)
    {
        cout<<"Element is found\n";
    }
    else{
        cout<<"Element not found\n";
    }
}
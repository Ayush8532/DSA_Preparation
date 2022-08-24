#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col,x;
    cin>>row>>col;
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
        for(int j=i;j<col;j++)
        {
            int temp=v[i][j];
            v[i][j]=v[j][i];
            v[j][i]=temp;
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
    return 0;
    
}
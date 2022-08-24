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
    int r=0,c=col-1;
    bool answer=false;
    while(r<row &&c>=0)
    {
        if(v[r][c]==search)
        {
            answer=true;
        }
        else if(v[r][c]>search)
        {
            c--;
        }
        else{
            r++;
        }
    }
    if(answer)
    {
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
    
}
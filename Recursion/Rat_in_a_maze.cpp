#include<bits/stdc++.h>
using namespace std;

bool isSafe(int newx,int newy,int n,vector<vector<int>>visited,vector<vector<int>>&m){
    if((newx>=0 &&newx<n)&&(newy>=0 &&newy<n) && visited[newx][newy]==0 && m[newx][newy]==1)
    {
        return true;
    }
    else{
        return false;
    }

}
void solve(vector<vector<int>>&m,int n,vector<string>&answer,int x,int y,vector<vector<int>>visited,string path)
{
    if(x==n-1 && y==n-1)
    {
        answer.push_back(path);
        return ;
    }
    visited[x][y]=1;
    int newx=x+1;
    int newy=y;
    if(isSafe(newx,newy,n,visited,m))
    {
        path.push_back('D');
        solve(m,n,answer,newx,newy,visited,path);
        path.pop_back();
    }
    newx=x;
    newy=y-1;
    if(isSafe(newx,newy,n,visited,m))
    {
        path.push_back('L');
        solve(m,n,answer,newx,newy,visited,path);
        path.pop_back();
    }
    newx=x;
    newy=y+1;
    if(isSafe(newx,newy,n,visited,m))
    {
        path.push_back('R');
        solve(m,n,answer,newx,newy,visited,path);
        path.pop_back();
    }
    newx=x-1;
    newy=y;
    if(isSafe(newx,newy,n,visited,m))
    {
        path.push_back('U');
        solve(m,n,answer,newx,newy,visited,path);
        path.pop_back();
    }
    visited[x][y]=0; 
}
vector<string>findpath(vector<vector<int>>&m,int n)
{
    vector<string>answer;
    string path="";
    if(m[0][0]==0)
    {
        return answer;
    }
    int srcx=0;
    int srcy=0;
    vector<vector<int>>visited=m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            visited[i][j]=0;
        }
    }
    solve(m,n,answer,srcx,srcy,visited,path);
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
    return answer;

}
int main()
{
    vector<vector<int>>m
    {
        {1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}
    };
    int n=4;
    findpath(m,n);
    return 0;

}
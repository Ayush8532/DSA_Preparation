#include<bits/stdc++.h>
using namespace std;
int findele(vector<vector<int> >&row,int key)
{
    
    int r=row.size();
    int col=row[0].size();
    int i=0,j=col-1;
    while(i>=0 &&i<r && j>=0 && j<col)
    {
        if(row[i][j]==key)
        {
            cout<<"Ele is at "<<i<<" "<<j;
            return 1;
        }
        else if(row[i][j]>key)
        {
            j--;
        }
        else if(row[i][j]<key)
        {
            i++;
        }
    }
    cout<<"Element not found";
    return 0;
}
int main(){
    vector<vector<int> >numbers{{10,20,30,40},{15,25,35,45},{27,29,37,45},{32,33,39,50}};
    int key=29;
    findele(numbers,key);
    return 0;
}
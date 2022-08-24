#include<bits/stdc++.h>
using namespace std;

void linersearch(vector<int>&v,int size,int find)
{
    for(int i=0;i<size;i++)
    {
        if(v[i]==find)
        {
            cout<<"Found at index "<<i;
            return ;
        }
    }
    cout<<"Not found";

}
int main(){
    vector<int>v={1,2,3,4,5,6,7};
    int find; 
    int size=v.size();
    cout<<"Enter number to find ";
    cin>>find;
    linersearch(v,size,find);
    return 0;
}
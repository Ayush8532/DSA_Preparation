#include<bits/stdc++.h>
using namespace std;

void printele(int arr[],int s,int e)
{
    for(int i=0;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }
}
bool binary(int arr[],int s,int e,int k)
{
    cout<<endl;
    printele(arr,s,e);
    if(s>e)
    {
        return false;
    }
    int mid=s+(e-s)/2;
    cout<<"Current mid "<<arr[mid];
    if(arr[mid]==k)
    {
        return true;
    }
    if(arr[mid]<k)
    {
        return binary(arr,mid+1,e,k);
    }
    else
    {
        return binary(arr,s,mid-1,k);
    }
}
int main()
{
    int arr[5]={3,21,33,44,56};
    int k=55;
    int s=0,e=4;
    if(binary(arr,s,e,k))
    {
        cout<<"Present";
    }
    else{
        cout<<"Non present";
    }
    return 0;
}
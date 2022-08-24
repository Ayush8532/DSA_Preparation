#include<bits/stdc++.h>
using namespace std;

void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void swapArray(int a[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(a[i],a[i+1]);
        }
    }

}
int main(){
    int n=9;
    int a[n]={1,2,3,4,5,6,7,8,9};
    swapArray(a,n);
    printArray(a,n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool remaining=isSorted(arr+1,size-1);
        return remaining;
    }

}
int main()
{
    int arr[5]={1,2,34,5,77};
    int size=5;
    bool ans=isSorted(arr,size);
    if(ans)cout<<"Sorted array";
    else cout<<"Not sorted";

    return 0;
}
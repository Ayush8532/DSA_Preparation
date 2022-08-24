#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool ans=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            ans=0;
            break;
        }
    }
    if(ans==true)
    {
        cout<<"Is palindrom";
    }
    else{
        cout<<"not palindrom";
    }
    return 0;
}
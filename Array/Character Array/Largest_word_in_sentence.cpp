#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    
    cin.getline(arr,n);
    cin.ignore();
    int curr=0,maxlen=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=' ')
        {
            curr++;
        }
        else{
            maxlen=max(maxlen,curr);
            curr=0;
        }
    }
    cout<<max(maxlen,curr);
    return 0;
}
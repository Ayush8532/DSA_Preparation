#include<bits/stdc++.h>
using namespace std;

int recurse(int n)
{
    if(n==0)
    {
        return 1;
    }
    int small=recurse(n-1);
    int big=n*small;
    return big;
}
int main()
{
    int n;
    cin>>n;
    int ans=recurse(n);
    cout<<ans;
    return 0;
}
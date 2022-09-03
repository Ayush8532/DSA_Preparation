#include<bits/stdc++.h>
using namespace std;

int powerval(int a,int b)
{
    if(b == 0)
        return 1;
    if(b==1)
        return a;
    int ans=powerval(a,b/2);
    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{
    int a;
    int b;
    cin>>a>>b;
    int ans=powerval(a,b);
    cout<<ans;
    return 0;

}
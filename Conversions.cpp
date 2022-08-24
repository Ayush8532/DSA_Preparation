#include<bits/stdc++.h>
using namespace std;

/** Binary to decimal
int binarytodeci(int x){
    int n=1,a,ans=0;
    while(x>0)
    {
        a=x%10;
        ans+=a*n;        
        n*=2;
        x=x/10;
    }
    return ans;
}
**/

/**int octaltodeci(int x)
{
    int base=1,last,ans=0;
    while(x>0)
    {
        last=x%10;
        ans+=last*base;
        base*=8;
        x=x/10;
    }
    return ans;
}
**/
int hexatodeci(string x){
    int ans=0,base=1;
    int a=x.size();
    for(int i=a-1;i>=0;i--)
    {
        if(x[i]>='0' && x[i]<='9')
        {
            ans+=base*(x[i]-'0');
        }
        else if(x[i]>='A' && x[i]<='F')
        {
            ans+=base*(x[i]-'A'+10);
        }
        base*=16;
    }
    return ans;
}
 int main(){
    string x;
    cin>>x;
    cout<<hexatodeci(x);

 }
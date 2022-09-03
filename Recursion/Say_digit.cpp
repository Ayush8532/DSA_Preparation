//Input= 123
//Output= One Two Three

#include<bits/stdc++.h>
using namespace std;

void saydigit(int n,string a[])
{ 
    if(n==0)
    {
        return ;
    }
    int digit=n%10;
    n=n/10;
    saydigit(n,a);
    cout<<a[digit]<<" ";
}

int main()
{
    string a[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int n;
    cin>>n;
    saydigit(n,a);
}
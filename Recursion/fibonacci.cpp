#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    int sum=0,count=1;
    if(count==n)
    {
        return sum;
    }
    for(int i=1;i<n;i++)
    sum+=i;

}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}
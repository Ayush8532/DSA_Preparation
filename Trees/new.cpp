#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,d=0;
    cin>>t;
    vector<int> v;
    while(t--)
    {
        int n, sum = 0, diff, i = 0;
        cin >> n;
        for (int j = 0; j < n;j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int k=0;k<=n;k++)
        {
            if(v[k]==v[k+1])
            {
                v[k]=v[k]+1;
                v[k+1]=v[k+1]-1
            }
        }
        while (i < (n-1))
        {
            sum += v[i];
            i++;
        }
        diff = (n - 1) * v[n - 1];
        d = sum - diff;  
        cout<<d<<endl;   
    }
}
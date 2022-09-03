#include<bits/stdc++.h>
using namespace std;

void reach(int dest,int src)
{
    cout<<src <<' '<<dest <<endl;
    if(src==dest)
    {
        cout<<"reached home";
        return;
    }
    src++;
    reach(dest,src);
}
int main()
{
    int dest=10;
    int src=1;
    reach(dest,src);
    return 0;
}
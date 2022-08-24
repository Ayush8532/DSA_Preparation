#include<bits/stdc++.h>
using namespace std;

int setBit(int n,int pos)
{
    int newval=1<<pos;
    int after=n|newval;
    return after;
}
int main(){
    cout<<setBit(5,1);
    return 0;

}
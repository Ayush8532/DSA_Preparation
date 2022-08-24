#include<bits/stdc++.h>
using namespace std;

int clearBit(int n,int pos)
{
    int newval=1<<pos;
    newval=~newval;
    int after=n&newval;
    return after;
}
int main(){
    cout<<clearBit(5,2);
    return 0;

}
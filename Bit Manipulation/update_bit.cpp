#include<bits/stdc++.h>
using namespace std;

int updateBit(int n,int pos,int value)
{
    int newval=1<<pos;
    newval=~newval;
    n=n&newval;
    value=value<<pos;
    n=n|value;
    return n;
}
int main(){
    cout<<updateBit(5,1,1);
    return 0;

}
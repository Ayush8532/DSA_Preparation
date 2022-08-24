#include<bits/stdc++.h>
using namespace std;

int numberof(int n){
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    cout<<numberof(19);
    return 0;
}
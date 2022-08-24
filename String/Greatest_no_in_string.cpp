#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="54235663322";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool palindrom(string &str,int i,int j)
{
    if(i>j)
    {
        return true;
    }
    if(str[i]==str[j])
    {
        return palindrom(str,i+1,j-1);
    }
    else{
        return false;
    }

}
int main()
{
    string str="ababbaba";
    int i=0;
    int j=str.length()-1;
    bool ispalin=palindrom(str,i,j);
    if(ispalin)
    {
        cout<<"string is palindrom";
    }
    else{
        cout<<"not palin";
    }
    return 0;

}
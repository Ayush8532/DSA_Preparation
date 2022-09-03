#include<bits/stdc++.h>
using namespace std;

void revers(string &str,int i,int j)
{
    cout<<"After First "<<str<<endl;
    if(i>j)
    {
        return;
    }
    swap(str[i++],str[j--]);
    revers(str,i,j);
}
int main()
{
    string str="ayush";
    int i=0;
    int j=str.length()-1;
    revers(str,i,j);
    cout<< str;
    return 0;
}
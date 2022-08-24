#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1="mghjiljetxzcsaq";
    /** To uppercase using function 
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);  
    **/
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i]-=32;
        }
    }
    cout<<s1<<endl;


    /**To lowercase**/
    /** transform(s1.begin(),s1.end(),s1.begin(),::tolower); **/
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]+=32;
        }
    }
    cout<<s1;
    return 0;
}
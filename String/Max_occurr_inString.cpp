#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="defffdnnhijjghiddhf";
    int freq[26];

    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++)
    {
        freq[str[i]-'a']++;
    }

    char ans='a';
    int maxlen=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxlen)
        {
            maxlen=freq[i];
            ans=i+'a';
        }
    }
    cout<<ans<<" "<<maxlen;
    return 0;
}

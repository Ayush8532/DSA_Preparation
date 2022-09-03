//Input: digits = "23"
//Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

#include<bits/stdc++.h>
using namespace std;

void solve(string number,vector<string>&answer,string output,int index,string mapping[])
{
    if(index>=number.length())
    {
        answer.push_back(output);
        return ;
    }
    int digits=number[index] -'0';
    string value=mapping[digits];
    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(number,answer,output,index+1,mapping);
        output.pop_back();
    }
}


vector<string>letterCombination()
{
    string number;
    cin>>number;
    vector<string>answer;
    string output="";
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(number,answer,output,index,mapping);
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
    return answer;
}

int main(){
    letterCombination();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<int>&pages,int student,int n,int curr_min){
    int stu=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+pages[i]>curr_min)
        {
            stu++;
            sum=pages[i];
            if(stu>student)
            {
                return false;
            }
        }
        else{
            sum+=pages[i];
        }
    }
    return true;
}
int distribution(vector<int>&pages,int student,int n){
    int sum=0;
    if(student>n)
    {
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        sum+=pages[i];
    }
    int start=0,end=sum;
    int answer=-1;
    while(end>=start)
    {
        int mid=start+(end-start)/2;
        if(isValid(pages,student,n,mid)==true)
        {
            answer=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return answer;
}
int main()
{
    vector<int>pages={1,2,3,4,5,6,7,8,9,10};
    int student=5;
    int n=pages.size();
    cout<<distribution(pages,student,n);
    return 0;


}
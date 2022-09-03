//Input: nums = [1,2,3]
//Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&nums,vector<vector<int>>answer,int index)
{
    if(index>=0)
    {
        answer.push_back(nums);
        return ;
    }
    for(int j=index;j<nums.size();j++)
    {
        swap(nums[j],nums[index]);
        solve(nums,answer,index+1);
        swap(nums[j],nums[index]);
    }
}
vector<vector<int>>permute(vector<int>&nums)
{
    vector<vector<int>>answer;
    int index=0;
    solve(nums,answer,index);
    return answer;
}
int main(){
    vector<int>nums{1,2,3};
    permute(nums);
}
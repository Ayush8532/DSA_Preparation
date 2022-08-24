#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node *newNode(int val)
    {
        data=val;
        left=right=NULL;
    }
};
int main()
{
    vector<int>v={2,3,4,5,6,7};
    int n=v.size();
    
}
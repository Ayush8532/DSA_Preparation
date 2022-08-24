#include <bits/stdc++.h>
using namespace std;
struct Mystack
{

    stack<int> s;
    stack<int> ss;
    void push(int a)
    {
        s.push(a);
        if (ss.size() == 0 || ss.top() >= a)
        {
            ss.push(a);
        }
    }
    int pop()
    {
        if (s.size() == 0)
        {
            cout<<"The stack is empty";
        }
        int ans = s.top();
        s.pop();
        if (ans == ss.top())
        {
            ss.pop();
        }
        return ans;
    }
    int getminele()
    {
        return ss.top();
    }
};
int main()
{
    Mystack s;
    s.push(18);
    s.push(19);
    s.push(20);
    cout<<"Min element is"<<s.getminele();
    return 0;
}
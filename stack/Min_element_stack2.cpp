#include <bits/stdc++.h>
using namespace std;
struct Mystack
{

    stack<int> s;
    int minele;
    int getmin()
    {
        if (s.size() == 0)
        {
            cout<<"Stack is empty";
        }
        return minele;
    }
    void push(int x)
    {
        if (s.size() == 0)
        {
            s.push(x);
            minele = x;
        }
        else
        {
            if (x >= minele)
            {
                s.push(x);
            }
            else if (x < minele)
            {
                s.push(2 * x - minele);
                minele = x;
            }
        }
    }
    void pop()
    {
        if (s.size() == 0)
        {
            cout<<"stack is empty";
        }
        else
        {
            if (s.top() >= minele)
            {
                s.pop();
            }
            else if (s.top() < minele)
            {
                minele = 2 * minele - s.top();
                s.pop();
            }
        }
    }
    int top()
    {
        if (s.size() == 0)
        {
            cout<<"Stack is empty";
        }
        else
        {
            if (s.top() >= minele)
            {
                return s.top();
            }
            else if (s.top() < minele)
            {
                return minele;
            }
        }
    }
};
int main()
{
    Mystack s;
    s.push(4);
    s.push(5);
    s.push(2);
    cout << "Min elements is " << s.getmin();
    return 0;
}
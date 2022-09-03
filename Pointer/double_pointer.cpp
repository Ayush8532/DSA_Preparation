#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number=6;
    int *p=&number;
    int **q=&p;
    cout<<number<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
}
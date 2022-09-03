#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    Hero(){
        cout<<"hello there"<<endl;
    }
};
int main()
{
    cout<<"First this line"<<endl;
    //default
    Hero ramesh;

    //dynamically
    Hero *h=new Hero;
     
    cout<<"After constructor call "<<endl;
    return 0;
}
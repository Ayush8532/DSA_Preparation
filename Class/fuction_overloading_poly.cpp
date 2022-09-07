#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:

    //Function overloading
    void getname(){
        cout<<"Hello guys"<<endl;
    }
    void getname(string a){
        cout<<"How are you"<<endl;
    }
    void getname(string a,int b)
    {
        cout<<"hey yo"<<endl;
    }
};

int main(){
    Animal d;
    d.getname();
    return 0;
}
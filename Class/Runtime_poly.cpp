#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void getname(){
        cout<<"Sounding"<<endl;
    }
};
class Dog:public Animal{
    public:
    void getname(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Dog d;
    d.getname();
    return 0;
}
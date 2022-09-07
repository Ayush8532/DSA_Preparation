#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    public:
    void getname(){
        cout<<"Barking"<<endl;
    }
};
class Human{
    public:
    int color;
    public:
    void gethuman(){
        cout<<"Speaking"<<endl;
    }
};

class Hybrid :public Animal,public Human{

};
int main(){
    Hybrid h;
    h.getname();
    h.gethuman();
    return 0;
}
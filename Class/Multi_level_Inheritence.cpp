#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int year;

    public:
    void getname(){
        cout<<"MultiLevel inheritance";
    }
};
class Dog:public Animal{

};

class german:public Dog{

};
int main(){
    german d;
    d.getname();
    return 0;
}
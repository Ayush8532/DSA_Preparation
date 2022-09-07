#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int year;

    public:
    void getname(){
        cout<<"Single inheritance";
    }
};
class Dog:public Animal{

};
int main(){
    Dog d;
    d.getname();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void getname(){
        cout<<"Single value"<<endl;
    }
};
class Dog{
    public:
    void getname(){
        cout<<"double value"<<endl;
    }
};

class german:public Animal,public Dog{
    
};
int main(){
    german d;
    d.Animal::getname();
    d.Dog::getname();
    return 0;
}
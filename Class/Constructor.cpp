#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int age;
    int roll;
    int year;
    Hero(){
        cout<<"Default constructor"<<endl;   //Default Constructor
    }
    Hero(int a,int r,int y)                 //Parameterised Constructor
    {
        cout<<"Parameterised "<<endl;
        age=a;
        roll=r;
        year=y;
    }
    Hero(Hero &a)
    {
        cout<<"Copy constructor"<<endl;
        age=a.age;
        roll=a.roll;
        year=a.year;
    }
    //destructor--
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
    void getHero()
    {
        cout<<age<<" "<<roll<<" "<<year;
    }
};
int main()
{
    //default constructor---
    Hero ramesh;

    //dynamically-- default constructor
    Hero *h=new Hero;

    //parameterised constructor--
    Hero a(50,1234,2000);

    //copy constructor--
    Hero b(a);
   // a.getHero();
    return 0;
}
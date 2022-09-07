#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int age;
    int roll;
    int year;
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
    void getHero()
    {
        cout<<age<<" "<<roll<<" "<<year;
    }
};
int main()
{
    Hero a(50,1234,2000);
    //a.getHero();
    Hero b(90,123,3533);


    return 0;
}
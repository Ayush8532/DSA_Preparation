#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    private:
    int group;

    public:
    int getAge(){
        return age;
    }
    void setAge(int a)
    {
        age=a;

    }
};

class Male:public Human {
    public:
    int color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};
int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;
    object1.setAge(24);
    cout<<object1.getAge()<<endl;
    object1.sleep();
    return 0;



}
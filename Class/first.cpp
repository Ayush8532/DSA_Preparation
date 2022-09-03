#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int power;
    public:
    int level;
    int getpower(){
        return power;
    }
    void setpower(int p)
    {
        power=p;
    }
};
int main()
{
    //statically
    Hero val;

    //Dynamically
    Hero *b=new Hero;


    b->setpower(22);
    cout<<"pow"<<b->getpower()<<endl;
    cout<<"power is "<<val.getpower()<<endl;
    val.setpower(34);
    cout<<"now power "<<val.getpower()<<endl;
    cout<<"number is "<<val.getpower()<<endl;

    return 0;
}
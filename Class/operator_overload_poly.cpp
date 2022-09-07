#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int a;
    int b;

    void operator+ (Animal &obj)
    {
        int value1=this->a;
        int value2=obj.a;
        
        cout<<"Output"<<value2-value1<<endl;
    }
};

int main(){
    
    Animal obj1,obj2;
    obj1.a=4;
    obj2.a=7;

    obj1+obj2;
    return 0;
}
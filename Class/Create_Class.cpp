#include<bits/stdc++.h>
using namespace std;

class library{

    char blood;
    public:
    string name;
    int rollno;
    int year;
    void setPhone(char group){
        blood=group;
    }
    char getPhone(){
        return blood;
    }
};
int main(){
    library a[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter Name of Student ";
        cin>>a[i].name;
        cout<<"Enter Roll of Student ";
        cin>>a[i].rollno;
        cout<<" Enter Year of Student ";
        cin>>a[i].year;
        cout<<" Enter Blood group ";
        char group;
        cin>>group;
        a[i].setPhone(group);
    }
    for(int i=0;i<3;i++)
    {
        cout<<"Name of Student is "<<a[i].name<<endl;
        cout<<"Roll of Student is "<<a[i].rollno<<endl;
        cout<<"Year of Student is "<<a[i].year<<endl;
        cout<<"Blood of Student is "<<a[i].getPhone()<<endl;   
    }
    return 0;
    
}
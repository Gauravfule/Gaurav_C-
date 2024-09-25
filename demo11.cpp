//WAp to create a class swaping 
#include<iostream>
using namespace std;
class swaping{
    public:
    int x,y,temp=0;
    void getdata(){
        cout<<"Enter the two value= "<<endl;
        cin>>x>>y;
    }
    void befor(){
        cout<<"firts= "<<x<<endl;
        cout<<"firts= "<<y<<endl;
    }
    void swap(){
        cout<<"After swaing= "<<endl;
        temp=x;
        x=y;
        y=temp;
        cout<<"The value of x no= "<<x<<endl;
        cout<<"The value of y no= "<<y<<endl;

    }

};
int main(){
    swaping obj;
    obj.getdata();
    obj.befor();
    obj.swap();
    return 0;
}
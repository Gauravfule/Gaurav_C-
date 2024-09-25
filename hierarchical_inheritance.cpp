#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    void getab()
    {
        cout<<"Ente the a and b = ";
        cin>>a>>b;
    }
};
class B : public A
 { 
    public:
    int b;
    void sum()
    {
        cout<<"sum= "<<a+b;
    }
};
 class C : public A
{
    public:
    void mul(){
    cout<<"muiltipication = "<<a*b;
    }
};
int main()
{   B b;
    b.getab();
    b.sum();
    C c;
    c.getab();
    c.mul();
    
     return 0;
}
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void geta()
    {
        cout<<"Ente the a = ";
        cin>>a;

    }
};
class B : public A
 { 
    public:
    int b;
    void getb()
    {
        cout<<"Ente the b = ";
        cin>>b;
    }
};
 class C : public B
{
    public:
    void sum(){
    cout<<"sum= "<<a+b;
    }
};
int main()
{
    C c;
    c.geta();
    c.getb();
    c.sum();
    return 0;
}
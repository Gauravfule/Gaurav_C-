#include<iostream>
#include<cmath>
using namespace std;
class A{
    protected:
    int a,b;
    public:
    void getadata(int x,int y){
        a=x;
        b=y;
    }
};
class B:public A{
    public:
    void arithmatic(){
        cout<<"The sum of two number= "<<a+b<<endl;
        cout<<"The subtraction of two number= "<<a-b<<endl;
        cout<<"The multipication of two number= "<<a*b<<endl;
        cout<<"The divition of two number= "<<a/b<<endl;
    }
};
class C{
    protected:
    int sq1,cub1,s1;
    public:
    void get(int x){
        s1=x;
    }
    void sqcube(){
        sq1=s1*s1;
        cub1=s1*s1*s1;
        cout<<"The square of number= "<<sq1<<endl;
        cout<<"The cube of number= "<<cub1<<endl;

    }

};
class D :public B ,public C{
    protected:
    int m;
    public:
    void input(int n){
        m=n;
    }
    void sqroot(){
        cout<<"the square root of number is= "<<sqrt(m)<<endl;

    }
};
int main(){
    D obj;
    int x,y,n;
    cout<<"Enter the x and y value= "<<endl;
    cin>>x>>y;
    cout<<"Enter finding root  = "<<endl;
    cin>>n;
    obj.getadata(x,y);
    obj.arithmatic();
    obj.get(x);
    obj.sqcube();
    obj.input(n);
    obj.sqroot();
    return 0;

}



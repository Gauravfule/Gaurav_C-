// WAP to read a number create two seperate class parents class is fac and chid class fibbonaci and factorial  parents class call chid 
// inheritace 2 multilevel ex class A call class B and class B call class C
//       A
//       |
//       B
//       |
//       c and object cerate in C class and operate three class 
#include<iostream>
using namespace std;
class demo5{
    protected:
    int n;
    public:
    void getdata(int n1){
        n=n1;
    }

};
class fraction:public demo5{
    protected:
    int s=1;
    public:
    void claculet(){
        for(int i=1;i<=n;i++){
            s=s*i;
        }
        cout<<"The freaction of number is = "<<s<<endl;
    }
};
class fibbonaci:public fraction{
    protected:
    int f0=0,f1=1,f2;
    public:
    void fac(){
        for(int i=1;i<=n;i++){
            cout<<"fibbonaci= "<<f0<<endl;
            f2=f0+f1;
            f0=f1;
            f1=f2;
        }
    }
};
int main(){
    fibbonaci obj;
    int n1;
    cout<<"Enter the number= "<<endl;
    cin>>n1;
    obj.getdata(n1);
    obj.claculet();
    obj.fac();
    return 0;

    

}
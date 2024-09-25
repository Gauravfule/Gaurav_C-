// WAP create three classes class A and Class B call class C this multiple inheritance
#include<iostream>
using namespace std;
class A{
    protected:
    int l1;
    public:
    void getlength(int l){
        l1=l;
    }

};
class B{
    protected:
    int b1;
    public:
    void getbreath(int b){
        b1=b;
    }
};
class C:public A,public B{
    private:
    int a;
    public:
    void area(){
        a=l1*b1;
        cout<<"area= "<<a;
    }
};
int main(){
    C obj;
    int l,b;
    cout<<"Enter the length and breath= "<<endl;
    cin>>l>>b;
    obj.getlength(l);
    obj.getbreath(b);
    obj.area();
    return 0;
}
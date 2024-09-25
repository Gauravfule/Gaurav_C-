//wpa to addition of two number using class
#include<iostream>
using namespace std;
class demo2{
    int a,b,c;
    public:
    void getdata(int x,int y){
        a=x;
        b=y;
    }
    void sum(){
        int c=a+b;
        cout<<"the addition of two  number= "<<c<<endl;

    }

};
main(){
    int x,y;
    demo2 obj;
    cout<<"Enter the two number= ";
    cin>>x>>y;
    obj.getdata(x,y);
    obj.sum();
    return 0;
}
#include<iostream>
using namespace std;
class demo{
    int a,b,c;
    public:
    void getdata(int x,int y){
        a=x;
        b=y;
    }
    void putdata(){
        cout<<"The value of a= "<<a<<endl;
        cout<<"The value of b= "<<b<<endl;
    }

};
main(){
    demo obj;
    int x,y;
    cout<<"Enter the two number= ";
    cin>>x>>y;
    obj.getdata(x,y);
    obj.putdata();
    return 0;
}
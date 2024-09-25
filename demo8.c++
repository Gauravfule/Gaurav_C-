#include<iostream>
using namespace std;
class temp{
    public:
    void display1(int x){
        cout<<"The  Number is = "<<x<<endl;
    }
    void display2(int x,int y){
        cout<<"The  Number is = "<<x<<" "<<y<<endl;  
    }
    void display3(int x,int y,int z){
        cout<<"The  Number is = "<<x<<" "<<y<<" "<<z;
    }

};
int main(){
    temp obj;
    int x,y,z;
    cout<<"Enter the three number  is= "<<endl;
    cin>>x>>y>>z;
    obj.display1(x);
    obj.display2(x,y);
    obj.display3(x,y,z);
    return 0;

}
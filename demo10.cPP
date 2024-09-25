// wap to read a  two nummber a and b find the sum of their last digit using class
#include<iostream>
using namespace std;
class sumlast{
    public:
    int x,y;
    int last1,last2;
    void getdata(int a,int b){
        x=a;
        y=b;
    }
    void print(){
        last1=x%10;
        last2=y%10;
        cout<<"The last number is= "<<last1<<endl;
        cout<<"The last number is= "<<last2<<endl;

    }
    void sum(){
        cout<<"The sum of last digit of two number is= "<<last1+last2<<endl;
    }
};
int main(){
    sumlast obj;
    int a,b;
    cout<<"Enter the two number= "<<endl;
    cin>>a>>b;
    obj.getdata(a,b);
    obj.print();
    obj.sum();
    return 0;
}

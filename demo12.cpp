//WAP  to create a array of object 
#include<iostream>
using namespace std;
class demo12{
    public:
    int x;
    void gedata(){
        cout<<"Enter the value of x ="<<endl;
        cin>>x;
    }
    void pudata(){
        cout<<"x= "<<x<<endl;
    }
};
int main(){
    demo12 a[3];
    for(int i=0;i<3;i++){
        a[i].gedata();
        a[i].pudata();
    }
    return 0;
}
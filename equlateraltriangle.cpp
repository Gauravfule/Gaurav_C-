#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the  value of 3 angle : "<<endl;
    cin>>x>>y>>z;
     if(x==60 && y==60 && z==60){
        cout<<"The equlateral triangle"<<endl;
    }
    else{
        cout<<"The not equlateral triangle";
    }
    return 0;

}
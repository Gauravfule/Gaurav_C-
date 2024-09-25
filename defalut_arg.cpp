#include<iostream>
using namespace std;
 float moneyreceived(int currentmoney, float factor= 1.04)   //defdalut arg
 {
    return currentmoney*factor;
 }
 int main()
 {
    int a,b;
    cout<<"ent er the value of a, and b "<<endl;
    cin>>a>>b;
    int money=100000;
    cout<<"deflaut arg are use= "<<moneyreceived(a)<<endl;                 //default arg are use 
    cout<<"passing arg ins use= "<<moneyreceived(a,b);
    return 0;
 }
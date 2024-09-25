#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,total;
    float percentage;
    cout<<"enter the mark of 5 different subject= ";
    cin>>a>>b>>c>>d>>e;
    total=a+b+c+d+e;
    percentage=total/5;
    cout<<"Total marks = "<<total<<endl;
    cout<<"percentage= "<<percentage<<"%";
    return 0;



}
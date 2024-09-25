// wap to read a nummber and find the last digit of that number
#include<iostream>
using namespace std;
int main()
{
    int n,last;
    cout<<"Enter the number= ";
    cin>>n;
    last=n%10;
    cout<<"The last digit of a given number= "<<last;
    return 0;
    
    
}
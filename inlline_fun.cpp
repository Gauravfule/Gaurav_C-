
// inline function 
#include<iostream>
using namespace std;
 int sum(int ,int);
int main()
{   int a,b;
    cout<<"Enter the two number= ";
    cin>>a>>b;
  cout<<"the sum of two number= "<<sum(a,b);
  return 0;



}
 inline int sum(int x,int y)                      //compiler replace the function callingloction with definition
 {
    return x+y;
 }





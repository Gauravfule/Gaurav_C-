// WAP to find the ffactorial of a number entered by user

#include<iostream>
using namespace std;
int main() 
{
   int i,n,f=1;
   cout<<"enter any no.= ";
   cin>>n;
   for (i = 1; i <=n; i++)
   {
       f=f*i;      
   }
  cout<<"\n factorial ="<<f;
  return 0;
}


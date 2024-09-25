#include<iostream>
using namespace std;
int display(int);
int main()
{
int n ,s;
cout<<"Enter the any number = ";
cin>>n;
s=display(n);
return 0;

}
int display(int a)
{
    int i;
    cout<<"All the number from 1 to "<<a<<" no= "<<endl; 
    for(i=1;i<=a;i++)
    {
        cout<<i<<endl;
      
    }
    
}
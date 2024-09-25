// Clock project  c++
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
    int h,m,s;
    int d=1000;
    cout<<"Set time : "<<endl;
    cin>>h>>m>>s;
    if(h>12 || m>60 || s>60){
        cout<<"ERROR"<<endl;
        exit(0);
    }
    while(1){
        s++;
        if(s>59)
        {
          m++;
          s=0;
        }
        if(m>59)
         {
            h++;
            m=0;

         }
         if(h>12)
         {
            h=1;

         }
         cout<<" Clock :  "<<endl;
         cout<<h<<":"  <<m<<":"   <<s;
          Sleep(d);

         system("cls");
    }
}
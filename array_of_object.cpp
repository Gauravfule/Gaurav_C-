#include<iostream>
using namespace std;
class temp
{
   public:
   int x;
   void gedata()
   {
    cout<<"Enter the  value of x= ";
    cin>>x;
   }

   void pudata()
   {
    cout<<"x= "<<x<<endl;
    }
};
main()
{
    temp a[3];
    for(int i=0;i<3;i++)
    {
        a[i].gedata();
        a[i].pudata();
        
    }
    return 0;
}
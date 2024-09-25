#include<iostream>
using namespace std;
class Sum
{
    int a,b;
    public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void putdata()
    {
        cout<<a<<endl;
        cout<<b;
    }
};
int main()
{
    Sum a;
    a.getdata(5,7);
    a.putdata();
    return 0;
}
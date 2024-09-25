#include<iostream>
using namespace std;
class Employee
{
    char name[30];
    float age;
    public:
    void getdata()
    {
        cout<<"Ente the employee name= "<<endl;
        cin>>name;
        cout<<"Enter the age= "<<endl;
        cin>>age;

    }
    void putdata()
    {
        cout<<"Nmae= "<<name;
        cout<<"age= "<<age;

    }
    
    };
    int main()
    {   int size;
        cout<<"Enter the total no. of employee= "<<endl;
        cin>>size;
        Employee obj[size];
        for(int i=0;i<size;i++)
        {
            cout<<" DEtails of manager"<<i+1<<endl;
            obj[i].getdata();
        }
        for(int i=0;i<size;i++)
        {
            cout<<"\n manager"<<i+1<<endl;
            obj[i].putdata();
        }
        return 0;



    }
    
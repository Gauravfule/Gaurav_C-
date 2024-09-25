#include<iostream>
using namespace std;
class Student
{
    int rollno;
	float per;
	public:
    void getstddata() 
    {
        cout<<"Enter Roll number and Percentage : "<<endl;
        cin>>rollno>>per;
    }
	void putstddata()
    {  
        cout<<"\nRoll No : "<<rollno<<"\nPercentage : "<<per<<endl;
    }
};
class Professor{
    
	int id;
	float sal;
	public:
    void getprofdata()
    {
        cout<<"Enter Id and Salary : "<<endl; 
        cin>>id>>sal;
    }
	void putprofdata()
    {
        cout<<"\nId : "<<id<<"\nSalary : "<<sal;
    }

};
class Person: public Student,public Professor
{
    
	char name[20];
	public:
    void getdata()
    {
        cout<<"Enter Name of Person : "<<endl;
        cin>>name;
    }
	void putdata() 
    {
        cout<<"Name : "<<name<<endl;
    }
};
int main()
{
   Person  p;
   p.getdata();
   p.putdata();
   p.getstddata();
   p.putstddata();
   p.getprofdata();
   p.putprofdata();
}
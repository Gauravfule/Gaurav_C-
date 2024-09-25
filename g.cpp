#include<iostream>
using namespace std;
class student
{
    int roll;
    char name;
    public: 
    student(int x, char y) 
    {
        roll=x;
        name=y;
    }
    void display()
    {
        cout<<"roll= "<<roll<<endl;
        cout<<"name= "<<name<<endl;
    }
    friend void neha(student &n);
   
};
void neha(student &n)
{
    n.roll=102;
    n.name= 'gaurav';
}
int main()
{
    student s(101,'gaurav');
    s.display();
    neha(s);
    s.display();
    return 0;


}
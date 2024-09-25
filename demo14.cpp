//WAp to crete a constructor in c++ defualt and paramiterize
#include<iostream>
#include<conio.h>
using namespace std;
class Student{
    public:
    int rollno;
    char name;
    Student(){
        cout<<"The defult constructor are called "<<endl;
    }
    Student(int i,char n){
        rollno=i;
        name=n;
        cout<<"The name and roll no is = "<<name<<rollno<<endl;
    }
    Student(Student &aa){
        int m=aa.rollno;
        cout<<"the Roll no are Copy in m= "<<m<<endl;
    }

};
int main(){
    Student s1;
    Student s2(44,"gauarv");
    Student s3(s2);
    return 0;

}
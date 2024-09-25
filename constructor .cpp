// WAP to the default constructor and parameterised 
#include <iostream>  
using namespace std;  
class Employee  
 { int id;
   string name; 
   public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }
        Employee(int i,string n)
        {
           id=i;
           name = n;
           cout<<id<<endl;
           cout<<name;

        }    
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2 (101,"gaurav");   
    return 0;  
}  
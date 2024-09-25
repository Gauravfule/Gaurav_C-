// WAP to read an array of 10 integer and print sum of all the even number in that array using claa
#include<iostream>
using namespace std;
class demo3
{
    public:
    int a[10],sum=0;
    int s=0;

    void getdata(){
        cout<<"Enter the 10 number= "<<endl;
        for(int i=0;i<10;i++){
            cin>>a[i];
        }
    }
    void addition(){
        for(int i=0;i<10;i++){
            if(a[i]%2==0){
                cout<<"The number even number=  "<<a[i]<<endl;
                sum=sum+a[i];
                
            }
            else{
                cout<<"The odd number is = "<<a[i]<<endl;
                s=s+a[i];
               
            }
            
        
        }
        cout<<"The summ of even number= "<<sum<<endl;
        cout<<"the sum of odd number = "<<s<<endl;
    }

    
};
int main(){
    demo3 obj;
    obj.getdata();
    obj.addition();
    return 0;
}
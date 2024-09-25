// WAP to read a no and claculet th factorial uisng class
#include<iostream>
using namespace std;
class demo4{
    private:
    int n1,s=1;
    public:
    void getdata(int n){
        n1=n;
    }
    void freaction(){
        for(int i=1;i<=n1;i++){
            s=s*i;
        }
        cout<<"freaction of the number = "<<s;
    }
};
int main(){
    demo4 obj;
    int n;
    cout<<"Enter the numnbe =  "<<endl;
    cin>>n;
    obj.getdata(n);
    obj.freaction();
    return 0;
}
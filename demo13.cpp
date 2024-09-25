#include<iostream>
using namespace std;
class Account{
    protected:
    int account_no;
    int balance=0;
    int amount=0;
    public:

    void open()  {
        cout<<"Enter the your account no last 4 digit= "<<endl;
        cin>>account_no;
        cout<<"Your account is entered= "<<endl;
        }
    void deposite(){
        cout<<"Enter the amount are dipotite account"<<endl;
        cin>>amount;
        balance=balance+amount;
        cout<<amount<<" amount are diposite account"<<endl;
    }
    
    void withdraw(){
        cout<<"Enter the amount are withdraw account"<<endl;
        cin>>amount;
        balance=balance-amount;
        cout<<amount<<" amount are withdraw account"<<endl;
    }
    void showbalance(){
        cout<<"Total balance of account= "<<balance<<endl;
    }
};

 main(){
    Account obj;
    int n;
    do{

    cout<<"\n you can do the following"<<endl;
        cout<<"\n Enter appropriate number "<<endl;
        cout<<"\n";
        cout<<"1: open account"<<endl;
        cout<<"2: diposite amount"<<endl;
        cout<<"3: amount withdraw your account"<<endl;
        cout<<"4: show your account balance"<<endl;
        cout<<"5: exit"<<endl;
        cout<<"What is your option?"<<endl;
        cin>>n;

        switch(n){
            case 1:
            obj.open();break;
            case 2:
            obj.deposite();break;
            case 3:
            obj.withdraw();break;
            case 4:
            obj.showbalance();break;
            case 5:
            cout<<"closed your account"<<endl;
            break;
            default:
            cout<<"Enter valid input"<<endl;
        }
    }while(n!=5);
        return 0;
}

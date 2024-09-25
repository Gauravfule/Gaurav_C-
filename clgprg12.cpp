#include<iostream>
using namespace std;
class account
{
    private:
    int account_no;
    float balance=0;
    int amount=0;
    public:
        char name[10];
        void open()
        {
            
            cout<<"Enter the account number form 602854XXXX  last 4 digit no= ";
            cin>>account_no;
            cout<<"YOUR account is opened"<<endl;
        }
        void Deposit()
        {
            cout<<"Enter the deposit amount= ";
            cin>>amount;
            balance=balance+amount;
            cout<<amount<<" is deposited your account";
        }
        void withdraw()
        {
            cout<<"Enter the withdraw amount= ";
            cin>>amount;
            balance=balance-amount;
            cout<<amount<<" debited your account";
        }
        void showbalance()
        {
            cout<<"Total balance= "<<balance;
        }


};
int main()
{
    account obj;
    int a;
    do
    {
        
        
        cout<<"\n you can do the following"<<endl;
        cout<<"\n Enter appropriate number "<<endl;
        cout<<"\n";
        cout<<"1: open account"<<endl;
        cout<<"2: amount deposit your acccount"<<endl;
        cout<<"3: amount withdraw your account"<<endl;
        cout<<"4: show your account balance"<<endl;
        cout<<"5: exit"<<endl;
        cout<<"What is your option?"<<endl;
        cin>>a;

        switch(a)
        {
            case 1:
            obj.open();break;
             case 2:
            obj.Deposit();break;
             case 3:
            obj.withdraw();break;
             case 4:
            obj.showbalance();break;
             case 5:
             cout<<"your account id closed";
            break;
            default: cout<<"Eorrr in input, try again"<<endl;
        }
    }while(a!=5);
    return 0;
}
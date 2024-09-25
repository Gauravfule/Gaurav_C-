/* project for choise any shirt,tshirt,pant..etc and claculet the total price discount and final price */
#include<iostream>
using namespace std;
struct product{
    char name[20];
    float price;
    int qty;
};
int main(){
   struct product s1;
   float dis;
   float total;
   int choice;


   while(1){
     cout<<"1. shirt"<<endl;
     cout<<"2. pant "<<endl;
     cout<<"3. t-shirt"<<endl;
     cout<<"4. shoes"<<endl;
     cout<<"Enter the choice = ";
     cin>>choice;


     switch(choice){
        case 1:
        cout<<"Enter the price ane qunlity of shirt= "<<endl;
        cin>>s1.price>>s1.qty;
        total=s1.price*s1.qty;

        cout<<"Total price= "<<total<<endl;

        if(total>=5000){
            dis=total*10/100;
            cout<<"\n you have"<<dis<<"discount and you have to pay only RS= "<<total-dis<<endl;
        }
        else if(total>=2000){
            dis=total*5/100;
            cout<<"\n You have "<<dis<<" discount andd you have to pay only RS = "<<total-dis<<endl;
        }
        break;

        case 2:
        cout<<"Enter the price and quntity of pant = "<<endl;
        cin>>s1.price>>s1.qty;
        total=s1.price*s1.qty;

        cout<<"Total price= "<<total<<endl;

        if(total>=5000){
            dis=total*10/100;
            cout<<"You have "<<dis<<" discount and you have to pay only RS= "<<total-dis<<endl;

        }
        else if(total>=2000){
            dis=total*5/100;
            cout<<"you have "<<dis<<" discount and  you have pay only RS "<<total-dis<<endl;
        }
        break;

        case 3:
        cout<<"Enter the price ane qunlity of T-shirt= "<<endl;
        cin>>s1.price>>s1.qty;
        total=s1.price*s1.qty;

        cout<<"Total price= "<<total<<endl;

        if(total>=5000){
            dis=total*10/100;
            cout<<"\n you have"<<dis<<" discount and you have to pay only RS= "<<total-dis<<endl;
        }
        else if(total>=2000){
            dis=total*5/100;
            cout<<"\n You have "<<dis<<" discount andd you have to pay only RS = "<<total-dis<<endl;
        }
        break;

        case 4:
        cout<<"Enter the price ane qunlity of shoes= "<<endl;
        cin>>s1.price>>s1.qty;
        total=s1.price*s1.qty;

        cout<<"Total price= "<<total<<endl;

        if(total>=5000){
            dis=total*10/100;
            cout<<"\n you have"<<dis<<" discount and you have to pay only RS= "<<total-dis<<endl;
        }
        else if(total>=2000){
            dis=total*5/100;
            cout<<"\n You have "<<dis<<" discount andd you have to pay only RS = "<<total-dis<<endl;
        }
        break;
        default:
        cout<<"The choise are worng enter valid"<<endl;

     }
     exit(1);
   }
   return 0;

}

#include <iostream>
using namespace std;

int main() 
{
    int a;
    int total=0;
do{
     cout<<"1.Order\n2.Bill and exit"<<endl;
        cin>>a;
        switch (a){
            case 1:{
                 cout<<"====Welcom to Jiit-Cafe===="<<endl;
        cout<<"Code  Item              Unit Price "<<endl;
        cout<<"1     Samosa               Rs. 15"<<endl;
        cout<<"2     Veg Sandwich         Rs. 40"<<endl;
        cout<<"3     Chole Bhature        Rs. 60"<<endl;
        cout<<"4     cold Coffee          Rs. 50"<<endl;
        cout<<"5     Thali                Rs. 90"<<endl;
       int opt;
       cin>>opt;
       switch(opt){
        case 1:{
            cout<<" Samosa       Rs. 15"<<endl;
            cout<<"Select Quantity"<<endl;
            int quant;
            cin>>quant;
            int samosa=15*quant;
            total=total+samosa;
        }
        break;
         case 2:{
            cout<<" Veg Sandwich      Rs. 40"<<endl;
            cout<<"Select Quantity"<<endl;
            int quant;
            cin>>quant;
            int Sandwich=40*quant;
            total=total+Sandwich;
        }
        break;
         case 3:{
            cout<<" Chole Bhature      Rs. 60"<<endl;
            cout<<"Select Quantity"<<endl;
            int quant;
            cin>>quant;
            int Bhature=60*quant;
            total=total+Bhature;
        }
        break;
         case 4:{
            cout<<" Cold Coffee     Rs. 50"<<endl;
            cout<<"Select Quantity"<<endl;
            int quant;
            cin>>quant;
            int Coffee=50*quant;
            total=total+Coffee;
        }
        break;
         case 5:{
            cout<<" Thali       Rs. 15"<<endl;
            cout<<"Select Quantity"<<endl;
            int quant;
            cin>>quant;
            int Thali=15*quant;
            total=total+Thali;
        }
        break;
        default: {cout<<"invalid input"<<endl;}
       }
            }
            break;
    case 2:{
        cout<<"====Bill===="<<endl;
        if(total>=200){
            int Discount=total/10;
            cout<<"Total = "<<total<<endl;
            cout<<"Discount 10% ="<<Discount<<endl;;
            cout<<"Total Paybale amount = "<<total-Discount<<endl;
        }
        else { cout<<"total payable Amount = "<<total<<endl;}
    }
        }
       
}
while(a==1);




}

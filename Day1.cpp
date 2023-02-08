#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello, Good Morning\n";
    //claculating total amount after paying using Userinput
     int totalamount;
     int amountpaid;

    cout<<"The total amount you have : ";
    cin>>totalamount;

    cout<<"The amount to be paid : ";
    cin>>amountpaid;

    int amountleft = totalamount - amountpaid;

    cout<<"The amount left : "<<amountleft; 
   // Applying if else conditions
    if(amountleft>20){
        cout<<"You can buy a ColdDrink\n";
    }
    else if(amountleft<=20){
        cout<<"You can buy an Chocolate\n";
    }
    else{
        cout<<"You can't buy More Things\n";
    }
  
    return 0;
}
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

    cout<<amountleft; 
    return 0;
}
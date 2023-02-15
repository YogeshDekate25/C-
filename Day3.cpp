#include<iostream>
using namespace std;

//Making a Function for calculating Fibenacci series

void Fib(int n)
{
    int t1=0;
    int t2=1;
    int nextTerm;

    for(int i=1 ;i<=n;i++){
        cout<<t1;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
       return;
  }

  // Function for calculating Factorial of a number  

  int fact(int n){
       int factorial=1;
       for(int i=2 ; i<=n ; i++){
          factorial*=i;
       }
       return factorial;
  }   

    int main()
    {    
        int n;
        cin>>n;

        int ans = fact(n);
        cout<<ans<<endl;

        return 0;
    }

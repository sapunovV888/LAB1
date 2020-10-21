#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    double b,q,n;
    cout<< "please enter first number \nb=";
    cin>> b;
    cout<< "Please enter denominator\nq=";
    cin>> q;
    cout<< "Please enter member which you would like\nn= "; 
    cin>> n;
    if(b==0 || q==0 || n==0)
      {cout<< "Progression does not exist";}
    else
    cout<<b*pow(q,n-1);
    return 0;
}
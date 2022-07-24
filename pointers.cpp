#include<iostream>
using namespace std;
int main()
{
    int a=5,b=6;
    int *ptr, *p;
    ptr = &a;
    p = &b;
   // cout<<
   // cout<<"ptr : "<<ptr<<endl;
    cout<<"&p : "<<&p<<endl;
    cout<<"p : "<<p<<endl;

    // ////////////////////

    cout<<"&ptr : "<<&ptr<<endl;
    cout<<"ptr : "<<ptr<<endl;
    return 0;
}
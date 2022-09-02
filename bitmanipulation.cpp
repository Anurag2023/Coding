#include <iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    int a;
    cout<<"enter a no : ";
    cin>>a;
    while(a>0)
    {
        cout<<a<<" ";
        a = (a&(a-1));
    }
    cout<<a<<" ";
    return 0;
}
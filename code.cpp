#include <iostream>
#include<vector>
#include<numeric>
using namespace std;
int fun(int a)
{
    int count =0;
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact = fact * i;
    }
    cout<<fact<<endl;
    while(fact>0)
    {
        int a = fact%10;
        if(a==0)
            count++;
        else
            break;
        fact = fact/10;
    }
    return count;
}
int main(){
    int a;
    cout<<"enter string ";
    cin>>a;
    int ans = fun(a);
    cout<<ans;
    return 0;
}
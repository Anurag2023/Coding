#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=1;i<=15;i++)
    {
        k=i;
        for(j=i;j>0;j--)
        {
            cout<<k<<" ";
            k--;
        }
        k=i;
        cout<<endl;
    }
    return 0;
}
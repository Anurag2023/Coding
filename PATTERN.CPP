#include <iostream>
using namespace std;
int main(){
    int i=0,j=0,k=0;
    for(;i<5;i++)
    {
        for(;j<5;j++)
        {
            cout<<k<<"  ";
            k++;
        }
        cout<<endl;
        j=0;
    }
    return 0;
}
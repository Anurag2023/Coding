#include <iostream>
using namespace std;
int main(){
    int ans = 0,i;
    int att[5] = {1,3,3,4,5};
    for(i=0;i<5;i++)
    {
        ans = att[i]^ans;
        cout<<ans<<"  ";
    }
   
    return 0;
}
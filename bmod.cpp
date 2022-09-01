#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int b,e,m;
    cin>>b>>e>>m;
    int ans  = pow(b,e) ;
    ans = ans%m;
    
    cout<<ans;
    return 0;
}
#include <iostream>
using namespace std;

void perm(int &var){
    for(int i=0;i<4;i++){
        if(i == 2)
        {
            var = 69;
        }
    }
}
int main(){
    int a = 3;
    cout<<"value before : "<<a<<"  ";
    perm(a);
    cout<<"value after : "<<a<<" ";
    return 0;
}
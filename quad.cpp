#include<bits/stdc++.h>
using namespace std;
int func(int a,int b,int c)
{
    int arr[2];
    if(a==0){
        return -1;
    }
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d)); 
    if (d > 0) {
        
        arr[0] =  (double)(-b + sqrt_val) / (2 * a) ;
        arr [1] = (double)(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0) {
        
        arr[0] = -(double)b / (2 * a);
        arr[1] = -(double)b / (2 * a);
    }
    else // d < 0
    {
        
        arr[0] =  -(double)b / (2 * a);
             
        arr[1] =  -(double)b / (2 * a);
    }
    int ans =( arr[0]+arr[1])/2;
    return ans;
}
int main()
{
    int a,b,c;
    cout<<" enter a ,b,c ";
    cin>>a,b,c;
    fun(a,b,c);

    return 0;
}
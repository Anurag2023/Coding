#include<iostream>
using namespace std;
int  main()
{   
    int * ptr = 0;
    int arr[5] = {11,12,3,4,5};
    ptr = arr;
    int n = 5;
    for(int i = 0; i< n; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    return 0;
}
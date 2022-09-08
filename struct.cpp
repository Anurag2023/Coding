#include<iostream>
#include<string>
using namespace std;

struct book{
    int id;
    string name;
    float price;
};

int main(){
    book b1={12,"anurag choudhary",69.69};

    cout<<b1.name<<endl;
    printf("%d",b1.id);
    return 0;
}
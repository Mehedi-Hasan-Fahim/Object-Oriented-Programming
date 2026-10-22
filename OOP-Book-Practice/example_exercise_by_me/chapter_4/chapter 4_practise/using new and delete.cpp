#include<iostream>
using namespace std;
int main()
{
    int *p;
    if(!p){
        cout<<"Allpcation error!";
        exit(1);

    }
    p=new int(1000000);

    if(!p)
    {
        cout<<"Allocation error!";
        exit(1);
    }
    cout<<*p;
    delete p;
}

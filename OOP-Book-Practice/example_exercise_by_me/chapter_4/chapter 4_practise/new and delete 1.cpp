#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[10];
    if(!p){
        cout<<"Allocation error"<<endl;
        exit(1);
    }
    int i ;
    for(i=0;i<10;i++){
        p[i]=i;
    }
    for(i=0;i<10;i++){
        cout<<p[i]<<endl;
    }
    delete[]p;
}

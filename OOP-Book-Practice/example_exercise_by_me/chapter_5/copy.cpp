#include<iostream>
using namespace std;
class number
{
    int a;
public:
    number(){
    a=0;
    }
    number(int n){
    a=n;
    }
    number(number& ob){
    cout<<"copy constructor called."<<endl;
    a=ob.a;
    }
    void show(){
    cout<<a<<endl;
    }
};
int main()
{
   number ob1,ob2(1);
   ob1.show();
   ob2.show();
   number ob3=ob2;
   ob3.show();
}

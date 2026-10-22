#include<iostream>
using namespace std;

class Number{
    int a;

public:
    Number(){//default constructor
     a=0;
    }
    Number(int n){//parameterized constructor
      a=n;
    }
    Number(Number& ob){
      cout<<"Copy Constructor called."<<endl;
      a=ob.a;
    }
  void  show(){
    cout<<a<<endl;
    }
};

int main(){
 Number ob1,ob2(15);
   ob1.show();
   ob2.show();
   Number ob3=ob2;//Number ob3(ob2);
   ob3.show();
}

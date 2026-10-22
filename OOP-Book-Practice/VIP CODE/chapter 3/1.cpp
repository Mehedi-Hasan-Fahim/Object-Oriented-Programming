#include<iostream>
using namespace std;

class hridi{
  int a,b;
  public:
   hridi(int m,int n){
       a=m;
       b=n;
   }

   void get(){
       cout<<a<<endl;
       cout<<b<<endl;
   }

  friend void mehedi(hridi& ob);

};

 void mehedi(hridi& ob){
     ob.a=5;
     ob.b=6;
    ob.get();
}


int main(){
    hridi ob(10,12);
    mehedi(ob);
    ob.get();

}

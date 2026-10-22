#include<iostream>
using namespace std;

class myclass
{
int num ;
public :
myclass (int x) {
    num = x;
     }
    friend int isneg(myclass ob);
};

int isneg(myclass ob){

      if(ob.num<0){
        return 1;
      }else{
         return 0;
      }

}


int main(){

 myclass ob(4);
    if(isneg(ob)){
        cout<<"Number is negative"<<endl;
    }
    else{
        cout<<"Number is positive"<<endl;
    }

}

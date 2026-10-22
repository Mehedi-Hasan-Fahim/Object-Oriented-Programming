#include<iostream>
using namespace std;

class myclass{
   int i,j;
   public:
       myclass(int a,int b);
       void show();
};

myclass::myclass(int a,int b){
    i=a;
    j=b;
}

void myclass::show(){

cout<<"i= "<<i<<" "<<"j= "<<j;


}

int main(){
    myclass ob(10,12);
    ob.show();

}

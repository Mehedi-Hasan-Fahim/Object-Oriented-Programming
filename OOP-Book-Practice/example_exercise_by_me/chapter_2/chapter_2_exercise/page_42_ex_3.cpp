#include<iostream>
using namespace std;

class box{
    double length,width,height,volume;

public:
    box(double l,double w,double h);
    void vol();

};

box::box(double l,double w,double h){
    length = l;
    width= w;
    height =h;
}

void box::vol(){

   volume=length*width*height;
   cout<<"Volume :"<<volume;
}

int main(){
      box ob(4,2,2.52);
  ob.vol();

}

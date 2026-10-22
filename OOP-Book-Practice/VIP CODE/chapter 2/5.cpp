
/* Create a class called box whose constructor function is passed three double values, each
of which represents the length of one side of a box. Have the box class compute the
volume of the box and store the result in a double variable. Include a member function
called vol() that displays the volume of each box object. */


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


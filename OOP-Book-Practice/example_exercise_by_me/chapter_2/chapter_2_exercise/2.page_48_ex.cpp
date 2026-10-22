#include<iostream>
using namespace std;
class area_cl
{
   public:
       double height;
       double width;
};

class rectangle:public area_cl{

public:

    rectangle(double h,double w){
    height=h;
    width=w;

    }
    double area(){
       return height*width;

    }



};

class isosceles:public area_cl{

public:

    isosceles(double h,double w){
    height=h;
    width=w;

    }
    double area(){
       return height*width;

    }

};


int main()
{
    rectangle ob1(5,3);
    isosceles ob2(4,6);
    cout<<ob1.area()<<endl;
    cout<<ob2.area()<<endl;


}

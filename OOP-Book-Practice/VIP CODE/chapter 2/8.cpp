#include<iostream>
using namespace std;
class area_cl
{
public:
    double radius;
};
class circle:public area_cl
{
  public:
      circle(double r){
      radius =r;

      }
      double computeArea()
      {
         return 3.1416*radius*radius;
      }

};
 class cylinder:public area_cl
 {
     double height;
 public:
    cylinder(double r,double h){
    radius = r;
    height=h;
    }
    double computeArea()
    {
        return  (2 *3.1416* radius*radius)+(3.1416*2*radius*height);
    }
 } ;



int main()
{
   circle ob1(4.5);
   cylinder ob2(5.7,6);
   cout<<ob1.computeArea()<<endl;
   cout<<ob2.computeArea()<<endl;
}

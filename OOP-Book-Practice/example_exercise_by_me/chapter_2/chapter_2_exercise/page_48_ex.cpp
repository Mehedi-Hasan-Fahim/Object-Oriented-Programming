#include<iostream>
using namespace std;

class area_cl
{
public :
double height ;
double width ;
};

class rectangle:public area_cl{

/*      public :
        double height ;
        double width ; */

        public:
           rectangle(double h,double w) {
           height =h;
           width=w;

           }

        double area(){

          return  height*width;
        }

};

class isosceles:public area_cl{

     /*      public :
        double height ;
        double width ; */
public:
       isosceles(double h,double w) {
           height =h;
           width=w;

           }

        double area(){

          return  0.5*height*width;
        }


};

int main(){
   rectangle ob1(5,4);
   isosceles ob2(3,2);

   cout<<ob1.area()<<endl;
   cout<<ob2.area()<<endl;


}

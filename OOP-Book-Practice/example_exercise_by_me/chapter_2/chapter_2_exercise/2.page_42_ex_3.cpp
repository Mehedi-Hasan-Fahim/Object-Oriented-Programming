#include<iostream>
using namespace std;
class box
{
    double length,width,height,volume;

   public:
       box(double l,double w,double h);
       void vol();
};
box::box(double l,double w,double h)
{
    length=l;
    width=w;
    height=h;
    volume=length*width*height;
}
void box::vol()
{
    cout<<"volume:"<<volume<<endl;
}

int main()
{
   box ob(5,3,2.5);
   ob.vol();

}

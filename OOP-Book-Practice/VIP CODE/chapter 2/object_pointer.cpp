#include <iostream>
using namespace std;
class myclass
{  int a;
   public :
   myclass (int x){
      a=x;
   }
   int get (){
    return a;
}
};


int main (){
    myclass ob (120) ; // create object

    cout << " Value using object : " << ob.get ();
     myclass *p; // create pointer to object
     p = &ob; // put address of ob into p


    cout << "\n";
    cout << " Value using pointer : " << p->get();
    return 0;
}

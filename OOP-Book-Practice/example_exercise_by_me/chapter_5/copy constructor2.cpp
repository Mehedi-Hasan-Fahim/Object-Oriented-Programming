#include <iostream>
using namespace std;
class myclass
{
public :
myclass ();
myclass ( const myclass &o);
myclass f();
};

myclass :: myclass (){
cout << " Constructing normally \n";
}

myclass :: myclass ( const myclass& o){
cout << " Constructing copy \n";
}

myclass myclass ::f(){
myclass temp ;
return temp ;
}
int main (){
myclass obj ;
obj = obj .f();
myclass ob2=obj;//myclass ob2(obj);
return 0;
}

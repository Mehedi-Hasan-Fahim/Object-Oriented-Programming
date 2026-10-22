#include <iostream>
using namespace std;

class myclass{
   int i ;
public :
myclass (int n){
   i = n;
cout << " Constructing " <<i << "\n";
}
~ myclass (){
    cout << " Destructing " << i << "\n";
    }
int get () {
    return i;
}
};

void f( myclass& o /*myclass o*/){
  cout << " Received " << o.get () << "\n";
}
int main (){
    myclass x(1) ;
    f(x);

return 0;
}

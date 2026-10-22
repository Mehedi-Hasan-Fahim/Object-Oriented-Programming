#include <iostream>
using namespace std;

void f(int& n){
  n = 100;
}

int main (){

   int i = 0;
   f(i);
   cout << " Here is i’s new value : " << i << "\n";
   return 0;
}

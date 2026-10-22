#include <iostream>
#include <cmath>
using namespace std;

void  dina(double& num){
  double frac;
  double val;

   frac = modf (num , &val );
   if( frac < 0.5)
   num =val ;
 else
   num = val +1.0;
}


int main (){
      double i = 100.9;
      cout << i << " rounded is ";
      dina(i);
      cout<<i<<endl;



return 0;
}


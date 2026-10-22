
/*  Create a function called min() that returns the smaller of the two numeric arguments
used to call the function. Overload min() so it accepts characters, integers, and doubles
as arguments.  */


#include <iostream>

using namespace std;

int  min(int n,int m){

    return n<m ? n:m;
}



double   min(double n,double m){
    return n<m ? n:m;   /*if(n<0){
                               return -n;
                                  }
                          else{
                              return n;
                                  } */
}


int main()
{
    cout<<min(10,12)<<endl;
    cout<<min(-7.1234,-7.085)<<endl;


    return 0;
}


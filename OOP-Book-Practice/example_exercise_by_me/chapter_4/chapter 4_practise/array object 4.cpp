#include <iostream>
using namespace std;
class samp{
int a ;
public:
    samp(int n){
    a=n;
    }

int get(){
    return a;
}


};
int main ()
{
   samp ob[10]={samp (1) , samp (2) ,
                samp (3) , samp (4) ,
                samp (5) , samp (6) ,
                samp (7) , samp (8) ,
                samp (9) , samp (10) ,
                };
                int i;
                for(i=0;i<10;i++){

                cout<<ob[i].get()<<endl;
                }
}

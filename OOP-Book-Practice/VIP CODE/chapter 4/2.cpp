#include<iostream>
using namespace std;

class samp{
    int a,b;
    public:
     samp(int m,int n){
         a=m;
         b=n;
     }
    int get_a(){
        return a;
    }
    int get_b(){
        return b;
    }
};

int main(){
    samp ob[5]={ samp(1,2), samp(3,4),samp(5,6), samp(7,8) ,samp(9,10)};

    int i;
    /*
         for(i=0;i<5;i++){
        cout<<ob[i].get_a()<<" ";
        cout<<ob[i].get_b()<<endl;
         }
    */
   samp *p;

    p=ob;

        for(i=0;i<5;i++){
        cout<<p->get_a()<<" ";
        cout<<p->get_b()<<endl;
        p++;
         }



}

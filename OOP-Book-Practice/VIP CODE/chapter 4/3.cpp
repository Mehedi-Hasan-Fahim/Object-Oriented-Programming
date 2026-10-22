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
    samp ob[3][2]={
                    samp(1,2),samp(3,4),
                    samp(5,6),samp(7,8),
                    samp(9,10),samp(11,12)
    };

    int i,j;
    /*
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cout<<ob[i][j].get_a()<<" ";
            cout<<ob[i][j].get_b()<<" ";
        }
        cout<<endl;
    } */

    samp *p;

        p=&ob[0][0];

       for(i=0;i<3;i++){
        for(j=0;j<2;j++){
           cout<<p->get_a()<<" ";
           cout<<p->get_b()<<" ";
          p++;
        }
        cout<<endl;
    }





}

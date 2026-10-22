#include<iostream>
using namespace std;
class samp{
int a;
public:
void set (int n){
a=n;
}
int get(){return a;
}
};

int main()
{
  samp ob[10];
  int i ;
  for(i=0;i<10;i++){
    (ob+i) ->set(i);
  }
  for(i=0;i<10;i++){
    cout<<ob[i].get()<<endl;
  }
}

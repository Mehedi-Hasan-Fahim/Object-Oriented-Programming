#include<iostream>
#include<ctime>
using namespace std;

class timer{
    clock_t start ,end;
public:
    timer();
    ~timer();
};
timer::timer()
{
    start=clock();
    cout<<"Start= "<<start<<endl;

}
timer::~timer(){
    end=clock();
    cout<<"End= "<<end<<endl;
    cout<<"Elapsed timer: "<<(end-start)/*  /CLOCKS_PER_SEC   */;
}

int main(){

  timer ob;
  for(int i=0;i<10000000;i++);


}

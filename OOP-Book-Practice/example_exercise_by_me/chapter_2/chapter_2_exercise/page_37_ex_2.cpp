
#include<iostream>
#include<ctime>
using namespace std;
class stopwatch{
    clock_t begin,end;
    public:
       stopwatch();
       ~stopwatch();
       void start();
       void stop();
       void show();
};
stopwatch::stopwatch(){
    begin=end=0;
}
stopwatch::~stopwatch(){
    cout<<"Stopwatch object is destroyed"<<endl;
    show();
}
void stopwatch::start(){
    begin=clock() ;
    cout<<"Begin: "<<begin<<endl;
}
void stopwatch::stop(){
    end=clock() ;
    cout<<"End: "<<end<<endl;
}
void stopwatch::show(){
    cout<<"Elapsed time "<<(end-begin)/*  /CLOCKS_PER_SEC   */<<endl;
}
int main(){
    stopwatch ob;
    ob.start();
    for(int i=0;i<100000000;i++);
    ob.stop();



}

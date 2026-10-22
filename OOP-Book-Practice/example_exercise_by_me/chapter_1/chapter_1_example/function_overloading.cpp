#include <iostream>
using namespace std;

void date(string date){
   cout<<date<<endl;
}
  void date(int month,int day,int year){
  cout<<month<<"-"<<day<<"-"<<year<<endl;
  }

int main ()
{
   date("11/08/2023");
   date(8,11,2023);

return 0;
}





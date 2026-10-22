#include <iostream>
using namespace std;


int main (){
int x;

int& ref =x;

x=1000;
cout<<ref<<endl;

ref=2000;
cout<<x;


return 0;
}

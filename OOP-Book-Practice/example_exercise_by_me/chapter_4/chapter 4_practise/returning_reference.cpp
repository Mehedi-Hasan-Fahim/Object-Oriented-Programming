#include <iostream>
using namespace std;

int x;

int& f()
{
return x;
}


int main (){
f() = 40 ;
cout << x <<endl;
return 0;
}

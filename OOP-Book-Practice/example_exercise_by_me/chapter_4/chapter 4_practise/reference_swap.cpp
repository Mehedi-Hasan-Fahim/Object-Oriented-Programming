#include <iostream>
using namespace std;
void swap(int& x, int& y)
{
     int t;
     t = x;
     x = y;
     y = t;
}


int main (){
int i, j;
i = 10;
j = 19;
cout << "i: " << i << ", ";
cout << "j: " << j <<endl;

     swap(i, j);
cout << "After swapping : "<<endl;
cout << "i: " << i << ", ";
cout << "j: " << j <<endl;
return 0;
}

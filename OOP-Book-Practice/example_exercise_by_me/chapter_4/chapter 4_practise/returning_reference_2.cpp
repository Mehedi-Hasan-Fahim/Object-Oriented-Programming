#include <iostream>
#include <cstdlib>
using namespace std;
class array{
    int size ;
    char *p;
public :
     array (int num);
     ~array ();

    char&  put (int i);
    char get (int i);
};

array :: array (int num){
p = new char [num ]; //p=(char *) malloc(num);
if (!p){
cout << "Allocation error"<<endl;
exit (1) ;
}
size = num ;
}

array :: ~array(){

       delete [] p;

}

char& array :: put (int i){
    if(i <0 || i > size )
{
cout << "Bounds error !!!"<<endl;
exit (1) ;
}
return p[i];
}

char array :: get (int i){
if(i <0 || i > size )
{
cout << "Bounds error !!!"<<endl;
exit (1) ;
}
return p[i];
}
int main ()
{
   array a (10) ;
   a.put (3) = 'D';
   a.put (2) = 'I';
   cout << a.get (3)<<endl << a.get (2)<<endl;
   a.put (11) = '!';

return 0;
}

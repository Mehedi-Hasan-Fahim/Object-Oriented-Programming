
/* Create a class called dice that contains one private integer variable. Create a function
called roll() that uses the standard random number generator, rand(), to generate a
number between 1 and 6. Then have roll() display that value.
  */



#include <iostream>

using namespace std;

class dice{
    int var;
    public:
    void roll();
};

void dice::roll(){
     var=rand()%6 +1;

     cout<<var<<endl;
}




int main()
{
    dice ob;
    ob.roll();

    return 0;
}


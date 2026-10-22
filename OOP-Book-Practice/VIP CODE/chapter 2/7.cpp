/*    Create a class called line that draws a line on the screen. Store the line length in a private
integer variable called len. Have line’s constructor take one parameter: the line length.
Have the constructor store the length and actually draw the line. If your system does not
support graphics, display the line by using *    . */



#include<iostream>
using namespace std;

class line{
  int len;

  public:
  line(int l){
      len=l;
      int i;
      for(i=0;i<len;i++){
          cout<<"*";
      }
  }
};

int main(){
    line ob(2);
}

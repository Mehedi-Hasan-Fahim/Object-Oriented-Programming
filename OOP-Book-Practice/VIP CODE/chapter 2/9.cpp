
/* Create a class called prompt. Pass its constructor function a prompting string of your
own choosing. Have the constructor display the string and then input an integer. Have
the constructor display the string and then input an integer. Store this value in a private
variable called count. When an object of type prompt is destroyed, ring the bell on the
terminal as many times as the user entered.
  */



#include <iostream>

using namespace std;

class prompt{
    int count;
    public:
    prompt(string s){
        cout<<s<<endl;
        cin>>count;
    }
    ~prompt(){
         int i;
      for(i=0;i<count;i++){
          cout<<"*";
      }
    }

};



int main()
{
    prompt ob("Enter a number:");

    return 0;
}

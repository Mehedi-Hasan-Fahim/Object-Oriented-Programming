#include<iostream>
using namespace std;
class card{

  string title,author;
  int num_copy;

  public:
     void store(string t,string a,int n);
     void show();
};

void card ::store(string t,string a,int n){
    title=t;
    author=a;
    num_copy=n;

}
void card :: show(){
    cout<<"Title: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Number of Copy: "<<num_copy<<endl;

}



int main(){

  card book1;
  book1.store("Teach Youself C","Herbert Schildt",4);
  book1.show();



}

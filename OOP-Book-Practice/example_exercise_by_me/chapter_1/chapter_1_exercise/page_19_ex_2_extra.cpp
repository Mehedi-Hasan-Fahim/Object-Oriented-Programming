#include<iostream>
using namespace std;
class card{

  string title,author;
  int num_copy;

  public:
     void store();
     void show();
};

void card ::store(){
    cout<<"Enter Book's Title:";
    getline(cin,title);

    cout<<"Enter Book's Author:";
    getline(cin,author);
    cout<<"Enter Book's Copy:";
    cin>>num_copy;

}
void card :: show(){
    cout<<"Title: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"Number of Copy: "<<num_copy<<endl;

}



int main(){

  card book1;
  book1.store();
  book1.show();




  }





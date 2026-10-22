
/*  Create a class called card that maintains a library card catalog entry. Have the class
store a book’s title, author, and number of copies on hand. Store the title and author
as strings and the number on hand as an integer. Use a public member function called
store() to store a book’s information and a public member function called show() to
display the information. Include a short main() function to demonstrate the class.
       */





#include<iostream>
using namespace std;
class card {
string title,author;
int no_copy ;
public:
void store(string t,string a,int n );

void show();
};

void card::store(string t,string a,int n){
     title = t;
     author=a;
     no_copy=n;

}

void card::show(){
   cout<<title<<endl;
  cout<<author<<endl;
   cout<<no_copy<<endl;
}

int main ()
{
    card ob;
    ob.store("Teach Yourself c++","Herbert Schildt",5);
    ob.show();
}


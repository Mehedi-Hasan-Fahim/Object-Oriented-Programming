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

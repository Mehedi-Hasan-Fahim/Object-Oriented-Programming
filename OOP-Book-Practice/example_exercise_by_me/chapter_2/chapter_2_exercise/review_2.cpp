#include<iostream>
using namespace std;
class x {
string name,address;
public:
    void store(string n, string a);

   void show();

};

void x::store(string n, string a){

     name = n;

     address=a;

}

void x::show(){

cout<<name<<endl;
cout<<address<<endl;

}

int main()
{
    x ob;
    ob.store("Mehedi","Banasre");
    ob.show();

}

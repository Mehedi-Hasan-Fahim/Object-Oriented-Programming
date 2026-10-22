#include<iostream>
using namespace std;

class myaddress{
    string name,address;
public:
    void store();
    void display();


};
void myaddress::store(){

cout<<"Enter your name: "<<endl;
getline(cin,name);
cout<<"Enter your address: "<<endl;
getline(cin,address);
}
void myaddress::display(){

    cout<<endl<<name<<endl;

    cout<<address<<endl;


}




int main()
{   myaddress ob;
     ob.store();
     ob.display();

}

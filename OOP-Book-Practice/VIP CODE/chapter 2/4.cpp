
/*  Create a class that holds name and address information. Store all the information in
character strings that are private members of the class. Include a public function that
stores the name and address. Also include a public function that displays the name and
address. (Call these functions store() and display().)  */



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

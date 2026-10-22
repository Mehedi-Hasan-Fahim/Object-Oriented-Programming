#include<iostream>
using namespace std;

class person{
    public:
   virtual void show(){
        cout<<"I am a person"<<endl;
    }
};

class student:public person{
    /*
    public:
    void show(){
        cout<<"I am a person"<<endl;
    }

    */
    public:
    void show(){
        cout<<"I am a student"<<endl;
    }

};

int main(){
    person p;
    person *ptr;
    student s;
    ptr = &p;
    ptr->show();

    ptr = &s ;
    ptr->show();




}

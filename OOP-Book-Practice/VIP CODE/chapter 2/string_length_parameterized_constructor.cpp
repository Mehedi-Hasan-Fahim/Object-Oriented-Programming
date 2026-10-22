#include<iostream>
#include<cstring>
using namespace std;

class strtype{
   char *p;
   int len;
   public:
   strtype(char* ptr);
   ~strtype();
    void show();

};

strtype::strtype(char* ptr){
    p=nullptr;
    len=0;
    len=strlen(ptr);
    p=(char *)malloc(len+1);
    if(!p){
        cout<<"Allocation error";
        exit(1);
    }
    strcpy(p,ptr);
}

strtype::~strtype(){
    cout<<"Freeing p"<<endl;
    free(p);
}

void strtype::show(){
    cout<<p<<" "<<"length "<<len<<endl;
}

int main(){
    strtype ob("My name is Dilara Yeasmin Dina");
    ob.show();
    cout<<endl;
}




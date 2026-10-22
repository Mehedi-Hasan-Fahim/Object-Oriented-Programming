#include<iostream>
#include<cstring>
using namespace std;

class strtype{
    char *p;
    int len;
public:
    strtype(char* ptr);
    ~strtype();

  friend char* get_string(strtype& obj);


};
strtype::strtype(char* ptr){
    len=strlen(ptr);
    p=(char*)malloc(len+1);
    if(!p){
        cout<<"Allocation error."<<endl;
        exit(1);
    }
    strcpy(p,ptr);

}

strtype::~strtype(){
    free(p);
}

char* get_string(strtype& obj){
        strcpy(obj.p,"Bitch");
    return obj.p;
}



int main(){
     strtype ob("Mehedi Hasan Fahim");


     cout<<get_string(ob);


}

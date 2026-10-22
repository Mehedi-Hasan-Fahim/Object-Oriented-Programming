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
void card ::show(){
       cout<<"title: "<<title<<endl;
       cout<<"author: "<<author<<endl;
       cout<<"number of copy: "<<num_copy <<endl;
}
int main(){

    card book1;
    book1.store("teach yourself c","herbert schildt",4);
    book1.show();

}

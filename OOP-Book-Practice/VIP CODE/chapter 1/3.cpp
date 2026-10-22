/* Create a function called rev str() that reverses a string. Overload rev str() so it can be
called with either one character array or two. When it is called with one string, have that
one string contain the reversal. When it is called with two strings, return the reversed
string in the second argument.  */






#include<iostream>
#include<cstring>
using namespace std;

void rev_str(char* a){

        int len=strlen(a);
        int j;


        for(j=len-1;j>=0;j--){
            cout<<a[j];
        }

}

void rev_str(char* s1,char* s2){

        int len=strlen(s1);
        int i,j;


        for(i=0,j=len-1;j>=0;i++,j--){
            s2[i]=s1[j];
        }
        s2[i]='\0';
        strcpy(s1,s2);

}




int main(){
   char s1[50],s2[50];

   strcpy(s1,"Mehedi Hasan Fahim");


   rev_str(s1);

   rev_str(s1,s2);
   cout<<endl<<s1<<endl;


}


#include<iostream>
#include<cstring>
using namespace std;
void rev_str(char* a)
{
    char temp[40];
    int len =strlen(a);
    for(int i=len-1,j=0;i>=0;i--,j++)
    {
        temp[j] =a[i];
    }
    strcpy(a,temp);
}
void rev_str(char* a,char* b)
{

    int len =strlen(a);
    for(int i=len-1,j=0;i>=0;i--,j++)
    {
        b[j] = a[i];
    }
}




int main()
{
    char a[40],b[40];
    strcpy(a,"dilara yeasmin dina");
    rev_str(a);
    cout<<a<<endl;;
    rev_str(a,b);
    cout<<b;
}

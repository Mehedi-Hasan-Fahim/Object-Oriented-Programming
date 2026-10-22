#include<iostream>
using namespace std;

void date (char *date)
{
    cout << "Date: " << date << "\n";
}
void date (int month, int day, int year)
{
    cout <<"Date: " << month << "/";
    cout<< day << "/" << year << "\n";
}


int main()
{
    date("8/12/23");
    date(8, 12, 23);
    return 0;
}


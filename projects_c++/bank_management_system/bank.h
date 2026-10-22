#ifndef BANK_H
#define BANK_H
#include "bank.h"
#include<string>

//using std::string;
using namespace std;


class bank
{
    public:

        void choice();
    private:
        int total=0;
        string id;
        struct{
        string name,ID,address;
        int contact,cash;
        }person[100];

        void personData();
        void show();
        void update();
        void search();
        void transaction();
        void del();



};

#endif // BANK_H

#include "bank.h"
#include<iostream>
#include <chrono>
#include <thread>
using namespace std;

void bank::choice()
{
    int ch;
    while(1)
    {
        cout<<"\n\nPress..!!"<<endl;
        cout<<"1.Create new account"<<endl;
        cout<<"2.View customers list"<<endl;
        cout<<"3.Update information of existing account"<<endl;
        cout<<"4.Check the details of an existing account"<<endl;
        cout<<"5.For transactions"<<endl;
        cout<<"6.Remove existing account"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"Choose a option:";
        cin>>ch;
        system("CLS");

        switch(ch)
        {
        case 1:
            bank ::personData();
            break;
        case 2:
            if(total==0)
            {
                cout<<"No data found"<<endl;
            }
            else
            {
                bank::show();
            }
            break;
        case 3:
            if(total==0)
            {
                cout<<"No data is entered"<<endl;
            }
            else
            {
                bank::update();
            }
            break;
        case 4:
            if(total==0)
            {
                cout<<"No data is entered"<<endl;
            }
            else
            {
                bank::search();
            }
            break;
        case 5:
            if(total==0)
            {
                cout<<"No data is entered"<<endl;
            }
            else
            {
                bank::transaction();
            }
            break;
        case 6:
            if(total==0)
            {
                cout<<"No data is entered"<<endl;
            }
            else
            {
                bank:: del();
            }
            break;
        case 7:
            exit(0);
            break;
        default:
            cout<<"Invalid Input"<<endl;
            break;

        }
    }
}
void bank ::personData()
{
    cout<<"Enter data of person"<<total+1<<endl;
    cout<<"Enter your name: ";
    cin.ignore();
    getline(cin,person[total].name);
    cout<<"ID: ";
    cin>>person[total].ID;
    cout<<"Address: ";
    cin.ignore();
    getline(cin,person[total].address);

    cout<<"Contact: ";
    cin>>person[total].contact;
    cout<<"Total Cash: ";
    cin>>person[total].cash;

    total++;

}

void bank::show()
{
    for(int i=0; i<total; i++)
    {
        cout<<"Data of person "<<i+1<<endl;
        cout<<"Name: "<<person[i].name<<endl;
        cout<<"ID: "<<person[i].ID<<endl;
        cout<<"Address: "<<person[i].address<<endl;
        cout<<"Contact: "<<person[i].contact<<endl;
        cout<<"Cash: "<<person[i].cash<<endl<<endl<<endl;
    }
}

void bank::update()
{
    int i,ch;
    cout<<"Enter id of update person:";
    cin.ignore();
    getline(cin,id);


    for(int i=0; i<total; i++)
    {
        if(id==person[i].ID)
        {
            cout<<"Current Data"<<endl;
            cout<<"Data of person "<<i+1<<endl;
            cout<<"1.Name: "<<person[i].name<<endl;
            cout<<"2.ID: "<<person[i].ID<<endl;
            cout<<"3.Address: "<<person[i].address<<endl;
            cout<<"4.Contact: "<<person[i].contact<<endl;
            cout<<"Choose a option:";
            cin>>ch;
            switch (ch)
            {
            case 1:
                cout<<"Enter your name: ";
                cin.ignore();
                getline(cin,person[i].name);
                break;
            case 2 :
                cout<<"ID: ";
                cin>>person[i].ID;
                break;
            case 3 :
                cout<<"Address: ";
                cin.ignore();
                getline(cin,person[i].address);

                break;
            case 4 :
                cout<<"Contact: ";
                cin>>person[i].contact;
                break;
            default:
                cout << "Invalid Input" << endl;
                break;

            }
        }
    }
    if(i==total-1)
    {
        cout<<"No Such Record Found"<<endl;
    }


}

void bank :: search()
{
    int i;
back:
    cout<<"Enter id of search person:";
    cin.ignore();
    getline(cin,id);


    for(int i=0; i<total; i++)
    {
        if(id==person[i].ID)
        {
            cout<<"Data of person "<<i+1<<endl;
            cout<<"1.Name: "<<person[i].name<<endl;
            cout<<"2.ID: "<<person[i].ID<<endl;
            cout<<"3.Address: "<<person[i].address<<endl;
            cout<<"4.Contact: "<<person[i].contact<<endl;
            break;

        }
    }
    if(i==total-1)
    {
        cout<<"No Such Record Found"<<endl;
        goto back;
    }

}

void bank :: transaction()
{
    int i,cash,ch;
    cout<<"Enter id of  person to transaction:";
    cin.ignore();
    getline(cin,id);

    for( i=0; i<total; i++)
    {
        if(id==person[i].ID)
        {

            cout<<"Data of person "<<i+1<<endl;
            cout<<"Name: "<<person[i].name<<endl;
            cout<<"ID: "<<person[i].ID<<endl;
            cout<<"Existing Cash: "<<person[i].cash<<endl;
            cout<<"Press 1 to deposit: "<<endl;
            cout<<"Press 2 to withdraw: "<<endl;
            cin>>ch;

            switch(ch)
            {
            case 1:
                cout<<"Amount of Deposit: ";
                cin>>cash;

                person[i].cash+=cash;
                cout<<"Your New Cash :"<<person[i].cash<<endl;
                break;
            case 2:
back:
                cout<<"Amount of Withdraw: ";
                cin>>cash;

                if(cash>person[i].cash)
                {
                    cout<<"Insufficient Balance"<<endl;
                    cout<<"Your existing cash: "<<person[i].cash<<endl;
                    this_thread::sleep_for(chrono::milliseconds(5000));
                    goto back;
                }
                person[i].cash-=cash;
                cout<<"Your New Cash :"<<person[i].cash<<endl;
                break;
            default:
                cout<<"Invalid Input"<<endl;
                break;
            }
        }

    }
    if(i==total-1)
    {
        cout<<"No Such Record Found"<<endl;
    }

}

void bank::del()
{
    int i,ch;

    cout<<"Press 1 to remove specific record"<<endl;
    cout<<"Press 2 to remove full record"<<endl;
    cin>>ch;

    switch(ch)
    {
    case 1:
        cout<<"Enter id of person you want to delete: "<<endl;
        cin>>id;

        for(int i=0; i<total; i++)
        {
            if(id==person[i].ID)
            {
                for(int j=i; j<total; j++)
                {
                    /* person[j].name=person[j+1].name;
                     person[j].ID=person[j+1].ID;
                     person[j].address=person[j+1].address;
                     person[j].contact=person[j+1].contact;
                     person[j].cash=person[j+1].cash;
                     */
                    person[j] = person[j + 1];
                    total--;
                    cout<<"Your required data is deleted"<<endl;
                    break;
                }
            }

        }
        if(i==total-1)
        {
            cout<<"No Such Record Found"<<endl;
            break;
        }
    case 2:
        total=0;
        cout<<"All record is deleted"<<endl;
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
}




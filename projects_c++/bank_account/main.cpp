#include <iostream>
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
//#include <iomanip>
using namespace std;

class account
{
    string name, type;
    string acc_num;

public:
    account(string s, string n, string t)
    {
        name = s;
        acc_num = n;
        type = t;
    }

    void show1(float b)
    {
        cout << name << endl
             <<"Account Number:"
             << acc_num << endl
             <<"Account type:"
             << type << endl
             << "Balance: "
             << b
             << endl<< endl;
    }

    void show2(float b, float r, float i)
    {
        cout << name << endl
             <<"Account Number:"
             << acc_num << endl
             <<"Account type:"
             << type << endl
             << "Interest rate: "
             << r << endl
             << "Interest: "
             << i << endl
             << "Current Balance: "
             << b
             <<endl<< endl;
    }
};

class curr_acc : public account
{
    float balance, minBalance = 500;

public:
    curr_acc(string s, string n, string t, float b) : account(s, n, t)
    {
        balance = b;
    }

    void deposit(int depo)
    {  if(depo<50000){
        balance += depo;
        cout << depo << " tk deposited" << endl;
        cout << "Current Balance: " << balance << endl
             << endl;
    } else
        {
            cout << "You  have exceeded the daily deposit limit of 50k" << endl<<endl;
        }

    }

    void withdraw(int withd)
    {
        if (balance - withd - minBalance >= 0 && withd<200000)
        {
            balance -= withd;
            cout << withd << " tk withdraw" << endl;
            cout << "Current Balance: " << balance << endl
                 << endl;
        }
        else if(withd>200000)
        {
            cout << "You  have exceeded the daily withdraw limit of 2 lakh" << endl<<endl;
        }
        else
        {
            cout << "You don't have sufficient balance" << endl;
            cout << "Current Balance: " << balance << endl
                 << endl;
        }
    }

    void print()
    {
        show1(balance);
    }
};

class sav_acc : public account
{
    float balance, minBalance = 500;
    float rate = 0.08;
    float interest;

public:
    sav_acc(string s, string n, string t, float b) : account(s, n, t)
    {
        balance = b;
        calculateInterest();
    }

    void calculateInterest()
    {
        interest = balance * rate;
        balance += interest;
    }

    void deposit(int depo)
    {
        if(depo<50000)
        {
            balance += depo;
            calculateInterest();
            cout << depo << " tk deposited" << endl;
            cout <<"Interest :"<<interest<<endl;
            cout << "Current Balance: " << balance << endl<<endl;
        }
        else
        {
            cout << "You have exceeded the daily deposit limit of 50k" << endl<<endl;
        }
    }

    void withdraw(int withd)
    {
        if (balance - withd - minBalance >= 0 && withd<200000)
        {
            balance -= withd;
            calculateInterest();
            cout << withd << " tk withdraw" << endl;
            cout <<"Interest :"<<interest<<endl;
            cout << "Current Balance: " << balance << endl<< endl;
        }
        else if(withd>200000)
        {
            cout << "You have exceeded the daily withdraw limit of 2 lakh" << endl<<endl;
        }
        else
        {
            cout << "You don't have sufficient balance" << endl;
            cout << "Current Balance: " << balance << endl<< endl;
        }
    }

    void print()
    {
        show2(balance, rate, interest);
    }
};

void option()
{
    cout << "Select an Option" << endl;
    cout << 0 << ". Exit" << endl;
    cout << 1 << ". Deposit" << endl;
    cout << 2 << ". Withdraw" << endl;
    cout << 3 << ". Show" << endl;
}


void animateText(const string& text) {
    int consoleWidth = 80; // Adjust this value based on your console width
    int textWidth = text.size();

    // Calculate the number of spaces needed to center the text
    int spaces = (consoleWidth - textWidth) / 2;

    // Output the initial spaces
    for (int i = 0; i < spaces; ++i) {
        cout << ' ';
    }

    // Animate the text
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(500)); // Adjust the delay as needed
    }
    cout << endl;
}




int main()
{
     animateText("Admin Panel");
    //cout << "Admin Panel" << endl;
    float balance = 1000;
    cout << "Enter user name: ";
    string s;
    getline(cin, s);
    cout << "Enter account number: ";
    string n;
    cin >> n;

    cout << endl
         << "Hi " << s << ", Select Your Account Type:" << endl
         << 1 << ". Current" << endl
         << 2 << ". Saving" << endl;
    int t;
    cin >> t;
    system("CLS");
    if (t == 1)
    {
        curr_acc obj(s, n, "current", balance);
        obj.print();
        while (true)
        {
            option();
            int o;
            cin >> o;
            if (o == 0)
            {
                break;
            }
            else if (o == 1)
            {
                system("CLS");
                cout << "Enter the amount of deposit: ";
                int depo;
                cin >> depo;
                obj.deposit(depo);
            }
            else if (o == 2)
            {
                system("CLS");
                cout << "Enter the amount of withdrawal: ";
                int withd;
                cin >> withd;
                obj.withdraw(withd);
            }
            else if (o == 3)
            {
                system("CLS");
                obj.print();
            }
        }
    }
    else
    {
        sav_acc obj(s, n, "saving", balance);
        obj.print();
        while (true)
        {
            option();
            int o;
            cin >> o;
            if (o == 0)
                break;
            else if (o == 1)
            {
                system("CLS");
                cout << "Enter the amount of deposit: ";
                int depo;
                cin >> depo;
                obj.deposit(depo);
            }
            else if (o == 2)
            {
                system("CLS");
                cout << "Enter the amount of withdrawal: ";
                int withd;
                cin >> withd;
                obj.withdraw(withd);
            }
            else if (o == 3)
            {
                system("CLS");
                obj.print();
            }
        }
    }
    return 0;
}

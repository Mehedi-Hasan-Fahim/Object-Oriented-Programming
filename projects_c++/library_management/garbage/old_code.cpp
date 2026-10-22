#include <iostream>
#include <fstream> // Include the fstream library
#include<limits>
using namespace std;

#define Size 50

class card {
    struct Book {
        string title, author,number_copies;

    };

    Book catalog[Size];
    int total = 0;

    string filename = "fahim.txt";

public:
    void store();
    //void show();
    void saveToFile();
    void readFromFile();
};

void card::store() {
    cout << "Enter the book's title: ";
    getline(cin, catalog[total].title);
    cout << "Author Name: ";
    getline(cin, catalog[total].author);
    cout << "Enter Number of Copies: ";
    getline(cin,catalog[total].number_copies) ;
    //cin.ignore();
    total++;

}

/*void card::show() {
    for (int i = 0; i < total; i++) {
        cout << "Book's Title: " << catalog[i].title << endl;
        cout << "Author: " << catalog[i].author << endl;
        cout << "Number of Copies: " << catalog[i].number_copies << endl;
    }
}*/

void card::saveToFile() {
    ofstream file;
    file.open(filename,ios::out|ios::app);

    if (file.is_open()) {
        for (int i = total-1; i < total; i++) {
            file <<"Book's Title:"<< catalog[i].title << endl;
            file <<"Author:"<< catalog[i].author << endl;
            file <<"Number of Copies:"<< catalog[i].number_copies << endl<<endl;
        }

        file.close();
        cout << "Data saved to file." << endl;
    } else {
        cout << "Failed to open the file." << endl;
    }
}


void card::readFromFile() {
    ifstream file(filename); // Create ifstream object for reading from a file

    bool dataFound = false;

    if (file.is_open()){
        total = 0; // Reset the total count


        while (total < Size && getline(file, catalog[total].title)&& getline(file, catalog[total].author) && getline(file,catalog[total].number_copies))
            {
            cout << catalog[total].title << endl;
            //getline(file, catalog[total].author);
            cout << catalog[total].author << endl;

            //getline(file,catalog[total].number_copies);
            //int number = stoi(catalog[total].number_copies);

            cout  <<catalog[total].number_copies /*number*/<< endl<<endl;
            file.ignore(numeric_limits<streamsize>::max(), '\n');
            total++;
            dataFound=true;

        }

 if (!dataFound) {
            cout << "No data found on the file." << endl;
        }

        file.close();

    } else {
        cout << "Failed to open the file." << endl;
    }
}





int main() {
    card obj;
    while (true) {
        cout << "0. Exit" << endl;
        cout << "1. Enter Books" << endl;
        cout << "2. Show Books" << endl;
        cout << "Choose an option: ";
        int ch;
        cin >> ch;
        cin.ignore();
        system("CLS");

        switch (ch) {
            case 0:
                exit(0);
                break;
            case 1:
                obj.store();
                obj.saveToFile();
                break;
            case 2:
                obj.readFromFile();
                break;
            default:
                cout << "Wrong option!!" << endl;
                break;
        }

    }

    return 0;
}

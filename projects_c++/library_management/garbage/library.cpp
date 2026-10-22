#include <iostream>
#include <fstream> // Include the fstream library
using namespace std;

#define Size 50

class card {
    struct Book {
        string title, author;
        int number_copies;
    };

    Book catalog[Size];
    int total;

public:
    card() : total(0) {}
    void store();
    void show();
    void saveToFile(const string& filename);
    void readFromFile(const string& filename);
};

void card::store() {
    cout << "Enter the book's title: ";
    getline(cin, catalog[total].title);
    cout << "Author Name: ";
    getline(cin, catalog[total].author);
    cout << "Enter Number of Copies: ";
    cin >> catalog[total].number_copies;
    cin.ignore();
    total++;
}

void card::show() {
    for (int i = 0; i < total; i++) {
        cout << "Book's Title: " << catalog[i].title << endl;
        cout << "Author: " << catalog[i].author << endl;
        cout << "Number of Copies: " << catalog[i].number_copies << endl;
        cout << endl;
    }
}

void card::saveToFile(const string& filename) {
    ofstream outputFile(filename); // Create ofstream object for writing to a file

    if (outputFile.is_open()) {
        for (int i = 0; i < total; i++) {
            outputFile << catalog[i].title << endl;
            outputFile << catalog[i].author << endl;
            outputFile << catalog[i].number_copies << endl;
        }

        outputFile.close();
        cout << "Data saved to file." << endl;
    } else {
        cout << "Failed to open the file." << endl;
    }
}

void card::readFromFile(const string& filename) {
    ifstream inputFile(filename); // Create ifstream object for reading from a file

    if (inputFile.is_open()) {
        total = 0; // Reset the total count

        while (!inputFile.eof() && total < Size) {
            getline(inputFile, catalog[total].title);
            getline(inputFile, catalog[total].author);
            inputFile >> catalog[total].number_copies;
            inputFile.ignore();
            total++;
        }

        inputFile.close();
        cout << "Data loaded from file." << endl;
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

        switch (ch) {
            case 0:
                exit(0);
                break;
            case 1:
                obj.store();
                break;
            case 2:
                obj.show();
                break;
            default:
                cout << "Wrong option!!" << endl;
                break;
        }

        obj.saveToFile("book catalog.txt"); // Save data to file after each operation
    }

    return 0;
}

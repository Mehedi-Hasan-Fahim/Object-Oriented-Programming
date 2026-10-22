#include<iostream>
#include <cstdlib> // Include cstdlib for the exit() function
using namespace std;

#define Size 5

class stack {
    int top;
    char data[Size];
public:
     stack();
    void push(char ch);
    void pop();
    void display();
};

   stack::stack() {
    cout<<"Constructing stack "<<endl;
    top = -1;
}

void stack::push(char ch) {

    if (top == Size - 1) {
        cout << "Stack is full";
    } else {
        top++;
        data[top] = ch;
    }
}

void stack::pop() {
    if (top == -1) {
        cout << "Stack is Empty";
    } else {
        cout << "Popped item is " << data[top];
        top--;
    }
}

void stack::display() {
    if (top == -1) {
        cout << "Stack is Empty";
    } else {
        cout << "\nStack is...\n";
        for (int i = top; i >= 0; i--) {
            cout << data[i] << " ";
        }
    }
}

int main() {
    stack obj;
    obj.push('A');
    obj.push('B');
    obj.push('C');
    obj.display();


}


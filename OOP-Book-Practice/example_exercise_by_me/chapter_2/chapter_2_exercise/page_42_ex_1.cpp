#include<iostream>
#include <cstdlib>
using namespace std;

#define Size 10

class stack {
    char* stk;
    int top;
public:
     stack();
    void push(char p);
    void pop();
    void display();
};

   stack::stack() {
    stk=nullptr;
    top = -1;
    stk=(char *)malloc(Size);
     if(!stk){
        cout<<"Allocation error";
        exit(1);
    }
}

void stack::push(char p) {

    if (top == Size - 1) {
        cout << "Stack is full";
    } else {
        top++;
        stk[top]=p;
    }
}

void stack::pop() {
    if (top == -1) {
        cout << "Stack is Empty";
    } else {
        cout << "Popped item is " << stk[top];
        top--;
    }
}

void stack::display() {
    if (top == -1) {
        cout << "Stack is Empty";
    } else {
        cout << "\nStack is...\n";
        for (int i = top; i >= 0; i--) {
            cout << stk[i] << " ";
        }
    }
}

int main() {
    stack ob;
    ob.push ('a');
    ob.push ('b');
    ob.push ('c');
    ob.push ('d');
    ob.push ('e');
    ob.push ('f');
    ob.display();

}



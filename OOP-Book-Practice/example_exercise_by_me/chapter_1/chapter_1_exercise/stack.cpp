#include<iostream>
#include<cstdlib>
using namespace std;
#define size 5
class stack{
   int top;
   char date[size];
   public :
       stack();
       void push();
       void pop();
       void display();
};
    stack::stack(){
        top = -1;
    }
    void stack::push(){
    char item;
    if(top == size - 1) {
        cout<<"stack is full";
    }else {
    cout << "Enter the item to push: ";
    cin>> item;
    top++;
    data[top] = item;
     }

}
void stack::pop(){
  if(top == -1){

    cout << "stack is empty";
  } else {
    cout<< "popped item is" << data[top];
    top--;

   }
}
void stack::display(){
    if(top == -1){

    cout << "stack is empty";
  } else {
    cout<< "\n stack  is...\n";
   for(int i =top; i>= 0; i--){
     cout<< data[i] << " ";


    }
  }
}
int main(){
int ch;
stack obj;
while (1){
    cout << "\n1)push\n";
    cout << "2)pop\n";
    cout << "3)display\n";
    cout << "4)exit\n";
    cout << "\nEnter choice: ";
    cin >> ch;

    switch(ch){
    case 1:

    obj.push();
    break;

    case 2:

    obj.pop();
    break;

    case 3:

    obj.display();
    break;

    case 4:

    exit(0);
    default:
        cout << "\nWrong choice..";

    }
  }
}

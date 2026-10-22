
#include<iostream>
using namespace std;


class A {
public:
    int publicVar;
    void publicFunction() {
        // Some code here
    }

protected:
    int protectedVar;
    void protectedFunction() {
        // Some code here
    }

private:
    int privateVar;
    void privateFunction() {
        // Some code here
    }
};

class B : private A {
    // publicVar is accessible as it is public in the Base class.
    // protectedVar is accessible as it is protected in the Base class.
    // privateVar remains inaccessible directly in the Derived class.
    /* public:
    int publicVar;
    void publicFunction() {
        // Some code here
    }

protected:
    int protectedVar;
    void protectedFunction() {
        // Some code here
    }

private:
    int privateVar;
    void privateFunction() {
        // Some code here
    } */

    public:
    void set(int x){
        publicVar=x;
    }
    void show(){
        cout<<publicVar;
    }
};

int main() {
    B ob;
   // ob.publicVar = 10;       // Not accessible
   // ob.publicFunction();     // Not accessible

    // ob.protectedVar = 20; // Not accessible
    // ob.protectedFunction();// Not accessible

    // ob.privateVar = 30;   // Not accessible
    // ob.privateFunction(); // Not accessible
    ob.set(10);
    ob.show();

    return 0;
}

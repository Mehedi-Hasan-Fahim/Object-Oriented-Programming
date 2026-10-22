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

class B : public A {
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
};

int main() {
    B ob;
    ob.publicVar = 10;       // Accessible
    ob.publicFunction();     // Accessible

    // ob.protectedVar = 20; // Not accessible from outside the class (protected).
    // ob.protectedFunction();// Not accessible from outside the class (protected).

    // ob.privateVar = 30;   // Not accessible from outside the Base class (private).
    // ob.privateFunction(); // Not accessible from outside the Base class (private).
    return 0;
}

#include <iostream>
using namespace std;

class A {
protected:
    int valueA;

public:
    A(int a) : valueA(a) {}

    void displayA() {
        cout << "Value from class A: " << valueA << endl;
    }
};

class B : public A {
protected:
    int valueB;

public:
    B(int a, int b) : A(a), valueB(b) {}

    void displayB() {
        cout << "Value from class B: " << valueB << endl;
    }
};

class C : public A {
protected:
    int valueC;

public:
    C(int a, int c) : A(a), valueC(c) {}

    void displayC() {
        cout << "Value from class C: " << valueC << endl;
    }
};

class D : public A {
protected:
    int valueD;

public:
    D(int a, int d) : A(a), valueD(d) {}

    void displayD() {
        cout << "Value from class D: " << valueD << endl;
    }
};

class E : public B {
protected:
    int valueE;

public:
    E(int a, int b, int e) : B(a, b), valueE(e) {}

    void displayE() {
        cout << "Value from class E: " << valueE << endl;
    }
};

int main() {
    E obj(10, 20, 30);
    
    obj.displayA();
    obj.displayB();
    obj.displayE();

    return 0;
}

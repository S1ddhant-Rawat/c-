#include <iostream>
using namespace std;

class Base1 {
protected:
    int num1;

public:
    Base1(int n1) : num1(n1) {}
};

class Base2 {
protected:
    int num2;

public:
    Base2(int n2) : num2(n2) {}
};

class Derived : public Base1, public Base2 {
public:
    Derived(int n1, int n2) : Base1(n1), Base2(n2) {}

    int sumNumbers() {
        return num1 + num2;
    }
};

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    Derived obj(a, b);
    cout << "The sum of the two numbers is: " << obj.sumNumbers() << endl;

    return 0;
}

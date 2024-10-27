e#include <iostream>

class Base {
protected:
    int num1; 
    int num2; 

public:
    Base(int a, int b) : num1(a), num2(b) {}

    void inputNumbers() {
        std::cout << "Enter the first number: ";
        std::cin >> num1;
        std::cout << "Enter the second number: ";
        std::cin >> num2;
    }
};

class FirstDerived : public Base {
public:
    FirstDerived(int a, int b) : Base(a, b) {}

    void displayFirstNumber() {
        std::cout << "First number: " << num1 << std::endl;
    }
};

class SecondDerived : public Base {
public:
    SecondDerived(int a, int b) : Base(a, b) {}

    void displaySecondNumber() {
        std::cout << "Second number: " << num2 << std::endl;
    }
};

int main() {
    int a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    FirstDerived firstObj(a, b);
    SecondDerived secondObj(a, b);

    firstObj.displayFirstNumber();
    secondObj.displaySecondNumber();

    return 0;
}

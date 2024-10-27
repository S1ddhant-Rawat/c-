#include <iostream>

class Base {
protected:
    int num1; 
public:
    void inputNum1() {
        std::cout << "Enter the first number: ";
        std::cin >> num1;
    }
};
class FirstDerived : public Base {
protected:
    int num2; 
public:
    void inputNum2() {
        std::cout << "Enter the second number: ";
        std::cin >> num2;
    }
};
class SecondDerived : public FirstDerived {
public:
    void calculateSum() {
        int sum = num1 + num2;
        std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
    }
};
int main() {
    SecondDerived obj;  
    obj.inputNum1();
    obj.inputNum2(); 
    obj.calculateSum();  
    return 0;
}

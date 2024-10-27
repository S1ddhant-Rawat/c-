#include <iostream>

class Base {
protected:
    float num1, num2; 

public:
        void inputNumbers() {
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;
    }
};

class Derived : public Base {
public:
    
    void calculateProduct() {
        float product = num1 * num2;
        std::cout << "Product of " << num1 << " and " << num2 << " is: " << product << std::endl;
    }
};

int main() {
    Derived obj;  
    obj.inputNumbers();  
    obj.calculateProduct();  

    return 0;
}
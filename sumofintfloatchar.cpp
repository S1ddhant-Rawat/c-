#include <iostream>

class Sum {
public:
    Sum(int a, int b) {
        std::cout << "Sum of integers: " << (a + b) << std::endl;
    }
    Sum(float a, float b) {
        std::cout << "Sum of floats: " << (a + b) << std::endl;
    }

    Sum(char a, char b) {
        std::cout << "Sum of chars (ASCII): " << (static_cast<int>(a) + static_cast<int>(b)) << std::endl;
    }
};

int main() {
    int int1, int2;
    float float1, float2;
    char char1, char2;
    
    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;
    Sum intSum(int1, int2);  


    std::cout << "Enter two floats: ";
    std::cin >> float1 >> float2;
    Sum floatSum(float1, float2);  
    
    std::cout << "Enter two characters: ";
    std::cin >> char1 >> char2;
    Sum charSum(char1, char2);  
    return 0;
}
#include <iostream>
using namespace std;

class ArrayHandler {
private:
    int* arr;
    int size;

public:

    ArrayHandler(int* inputArray, int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = inputArray[i];
        }
    }
    ArrayHandler(const ArrayHandler& other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }

    int sumOfPositive() {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }

      ~ArrayHandler() {
        delete[] arr;
    }
};
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* inputArray = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> inputArray[i];
    }
    ArrayHandler arrayHandler(inputArray, size);
    ArrayHandler copiedArrayHandler = arrayHandler;
    int sum = copiedArrayHandler.sumOfPositive();
    cout << "Sum of positive numbers: " << sum << endl;
    delete[] inputArray;
    

    return 0;
}

#include <iostream>
using namespace std;

class Array {
private:
    int *arr;
    int size;

public:
    // Constructor
    Array(int s) {
        size = s;
        arr = new int[size];
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Copy Constructor (Deep Copy)
    Array(const Array &a) {
        size = a.size;
        arr = new int[size];  // allocate new memory

        for (int i = 0; i < size; i++) {
            arr[i] = a.arr[i];  // copy values
        }
        cout << "Copy constructor called\n";
    }

    // Display function
    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~Array() {
        delete[] arr;
};

int main() {
    Array A1(3);   // Original object
    A1.display();

    Array A2 = A1; // Copy constructor called
    A2.display();

    return 0;
}
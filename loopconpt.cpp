#include <iostream>
#include <string>

using namespace std;

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    // Array for easy access to English names
    string names[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = start; i <= end; i++) {
        // Condition: Only process if the number is 9 or less
        if (i <= 9) {
            // Print the English name
            cout << names[i] << endl;

            // Check for Even or Odd
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        } else {
            // If the number is greater than 9, we stop the loop logic
            break; 
        }
    }

    return 0;
}
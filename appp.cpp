#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows in the pattern

    for (int i = rows; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl; // Move to the next line after printing each row
    }

    return 0;
}

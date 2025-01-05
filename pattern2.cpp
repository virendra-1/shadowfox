#include <iostream>
using namespace std;

void printPattern(int n) {
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= mid) {
                if (j >= mid - i && j <= mid + i)
                    cout << "*";
                else
                    cout << " ";
            } else {
                if (j >= i - mid && j < n - (i - mid))
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 9; // You can change this value to adjust the size of the pattern
    printPattern(n);
    return 0;
}

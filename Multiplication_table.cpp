#include <iostream>
using namespace std;

int main() {
    int num;

    // Ask the user to enter a number
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    // Generate and display the multiplication table
    cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}

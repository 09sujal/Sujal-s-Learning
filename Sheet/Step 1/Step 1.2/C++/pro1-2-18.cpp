#include <iostream>
using namespace std;

int main() {
    int a = 5; // Define the number of rows
    char b = 'E'; // Initialize character 'E'

    for (int row = 1; row <= a; row++) {
        // Loop for each row from 1 to 'a'
        for (int col = 1; col <= row; col++) {
            // Loop to print characters based on the formula
            cout << char(b - row + col) << ' '; // Print the character using the formula
        }
        cout << endl; // Move to the next line after printing characters for the current row
    }
    return 0; // Indicate successful execution of the program
}

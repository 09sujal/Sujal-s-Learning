#include <iostream>
using namespace std;

int main() {
    int a = 5;

    for (int row = 0; row < a; row++) {

        // Starting spaces
        for (int col = 0; col < row; col++) {
            cout << " ";
        }

        // Stars    
        for (int col = 0; col < (2*a-(2*row+1)); col++) {
            cout << "*";
        }

        // Ending spaces
        for (int col = 0; col < row; col++) {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}

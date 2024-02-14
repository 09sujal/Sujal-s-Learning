#include <iostream>
using namespace std;

int main()
{
    int a = 5; // Define the number of rows

    for (int row = 0; row < a; row++)
    {
        // Loop for each row
        for (char ch = 'A'; ch <= 'A' + row; ch++)
        {
            // Loop to print characters from 'A' to 'A' + row
            cout << ch << ' '; // Print the character followed by a space
        }
        cout << endl; // Move to the next line after printing characters for the current row
    }
    return 0;
}

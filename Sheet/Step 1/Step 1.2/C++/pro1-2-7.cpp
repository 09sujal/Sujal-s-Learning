#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int row = 0; row < a; row++)
    {

        // spaces
        for (int col = 0; col < a - row - 1; col++)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "*";
        }
        // spaces
        for (int col = 0; col < a - row - 1; col++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
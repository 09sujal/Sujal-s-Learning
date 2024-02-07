#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int s = 0;
    for (int row = 0; row < a; row++)
    {

        // stars
        for (int col = 1; col <= a - row; col++)
        {
            cout << "*";
        }

        // spaces
        for (int col = 0; col < s; col++)
        {
            cout << " ";
        }

        // stars
        for (int col = 1; col <= a - row; col++)
        {
            cout << "*";
        }
        s += 2;
        cout << endl;
    }
    s = 2*a-2;
    for (int row = 1; row <= a; row++)
    {

        // stars
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        // spaces
        for (int col = 0; col < s; col++)
        {
            cout << " ";
        }

        // stars
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        s -= 2;
        cout << endl;
    }
    return 0;
}

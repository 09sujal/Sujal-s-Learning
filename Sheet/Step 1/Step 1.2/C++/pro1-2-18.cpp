#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    char b = 'E';

    for (int row = 1; row <= a; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << char(b - row + col) << ' ';
        }
        cout << endl;
    }
    return 0;
}

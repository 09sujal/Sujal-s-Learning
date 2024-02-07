#include <iostream>
using namespace std;

int main()
{
    int a = 4;

    for (int row = 0; row < a; row++)
    {

        for (int col = 0; col < a - row - 1; col++)
        {
            cout << " ";
        }

        char ch = 'A';
        int bp = (2 * row + 1) / 2;
        for (int col = 1; col <= 2 * row + 1; col++)
        {
            cout << ch;

            if (col <= bp)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        for (int col = 0; col < a - row - 1; col++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
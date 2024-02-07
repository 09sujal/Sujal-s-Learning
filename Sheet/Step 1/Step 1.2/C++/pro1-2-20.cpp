#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int space = 2 * a - 2;

    for (int row =1; row <= 2 * a - 1; row++)
    {
        int star = row;
        if (star > a)
            star = 2 * a - row;

        // star
        for (int col = 1; col <= star; col++)
        {
            cout << "*";
        }

        // space
        for (int col = 0; col <= space; col++)
        {
            cout << " ";
        }

        // star
        for (int col = 1; col <= star; col++)
        {
            cout << "*";
        }
        cout << endl;
        if(row < a) space-=2;
        else space+=2;
    }

    return 0;
}
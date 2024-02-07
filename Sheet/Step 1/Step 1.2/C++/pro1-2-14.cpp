#include <iostream>
using namespace std;
int main()
{

    int a = 5;

    for (int row = 0; row < a; row++)
    {
        for (char ch = 'A'; ch <= 'A' + row; ch++)
        {
            cout << ch << ' ';
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{

    int a = 5;
    char ch = 'A';
    for (int row = 1; row <= a; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << ch << ' ';
        }
        cout << endl;
        ch+=1;
    }
    return 0;
}

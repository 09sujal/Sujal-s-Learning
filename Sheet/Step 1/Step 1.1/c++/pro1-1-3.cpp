#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << "Greater";
    }
    else if (a < b)
    {
        cout << "Lesser";
    }
    else if (a == b)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Invalid";
    }
    return 0;
}
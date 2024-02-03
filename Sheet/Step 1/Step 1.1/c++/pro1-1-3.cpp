#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (a > b)
    {
        cout << "greater";
    }
    else if (b > a)
    {
        cout << "smaller";
    }
    else
    {
        cout << "equal";
    }

    return 0;
}
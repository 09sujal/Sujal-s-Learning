#include <iostream>
using namespace std;

int mx(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int s, a, b;

    cin >> s;
    cin >> a >> b;
    if (s == 1)
    {
        cout << mx(a, b);
    }
    else if (s == 2)
    {
        swap(a, b);
        cout << a << " " << b << endl;
    }
    else
    {
        cout << "Invalid test option " << endl;
    }

return 0;
}

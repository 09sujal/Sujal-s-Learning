#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int last, even = 0, odd = 0;

    while (n > 0)
    {
        last = n % 10;

        if (last % 2 == 0)
        {
            even += last;
        }
        else
        {
            odd += last;
        }
        n = n / 10;
    }
    cout << "even : " << even << "\nodd : " << odd << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int temp;
    int pre = 0;
    int cur = 1;

    if (n <= 1)
    {
        return n;
    }

    for (int i=2; i <= n; ++i)
    {
        temp = cur;
        cur+=pre;
        pre=temp;
    }
    cout << cur;
    return 0;
}
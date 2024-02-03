#include <bits/stdc++.h>
using namespace std;

int iterativeFibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int prev = 0;
    int current = 1;

    for (int i = 2; i <= n; ++i) {
        int temp = current;
        current += prev;
        prev = temp;
    }

    return current;
}

int main() {
  
    int n;
    cin >> n;

    cout << iterativeFibonacci(n) << endl;

    return 0;
}

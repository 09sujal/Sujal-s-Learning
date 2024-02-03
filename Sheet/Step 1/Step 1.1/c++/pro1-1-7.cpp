#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n, e, o, l;
    cin >> n;

    e = 0; o = 0;

    while (n > 0){
        l = n%10;

        if (l%2 == 0){
            e += l;
        }
        else {
            o +=l;
        }
        n /= 10;
    }
    
    cout<< e << " " << o << endl;

    return 0;
}

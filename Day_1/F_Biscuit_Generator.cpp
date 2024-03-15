#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    for (int i = a; i <= c; i += a) {
        sum += b;
    }
    cout << sum;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = a; i <= b; ++i) {
        if (i % c == 0) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
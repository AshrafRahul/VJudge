#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        if(a>b) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) cin >> b[i];

        int cnt = 0;
        for (int i=0; i<n; i++) {
            if (b[i]<=2*a[i] && a[i]<=2*b[i]) cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
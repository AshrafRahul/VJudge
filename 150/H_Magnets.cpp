#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string magnets;
    cin >> magnets;

    int count = 1;
    for (int i = 1; i < n; i++) {
        string nextMagnet;
        cin >> nextMagnet;

        if (nextMagnet != magnets) {
            count++;
            magnets = nextMagnet;
        }
    }

    cout << count << endl;

    return 0;
}

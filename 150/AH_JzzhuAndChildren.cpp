#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, last;
    double t, max(0);

    cin >> n >> m;

    for(int i=1; i<=n; i++){
        cin >> t;

        double rounds = ceil(t/m);
        
        if(rounds >= max){
            last=i;
            max = rounds;
        }
    } cout << last << endl;


    return 0;
}
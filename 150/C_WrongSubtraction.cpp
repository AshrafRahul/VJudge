#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n >> t;
    
    while(t--){
        if(n%10!=0) n-=1;
        else n/=10;
    }

    cout << n << endl;

    return 0;
}
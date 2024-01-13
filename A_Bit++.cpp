#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x=0;
    while(n--){
        string str;
        cin >> str;

        if(str == "++X" || str == "X++") x++;
        else x--;
    }

    cout << x << endl;

    return 0;
}
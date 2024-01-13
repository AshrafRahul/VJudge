#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a,b;
    int sum=0, sol=0;

    while(n--){
        cin >> a >> b;
        sum = (a+sol)-b;

        if(sum<0) sol=0;
        else sol=sum;
    } cout << sol << endl;

    return 0;
}
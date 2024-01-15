#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i%2==1){
                if((i/2)%2==0){
                    if(j==col-1) cout << "#";
                    else cout << ".";
                }
                if((i/2)%2==1){
                    if(j==0) cout << "#";
                    else cout << ".";
                }
            }
            else cout << "#";
        }
        cout << endl;
    }

    return 0;
}
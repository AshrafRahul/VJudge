#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    int count = 0;
    vector<int> scores(n);

    for(int i=0; i<n; i++){
        cin >> scores[i];
    }

    int kthScore = scores[k-1];

    for(int i=0; i<n; i++){
        if(scores[i]>=kthScore && scores[i]>0) count++;
    }
    cout << count << endl;

    return 0;
}
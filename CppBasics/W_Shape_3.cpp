#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    for (int i = 0; i < 2*n;i++){
        if(i<(2*n)/2){
            for (int j = 0; j < n - i - 1;j++)//preceeding space
                cout << " ";
            for (int k = 0; k < 2 * (i + 1) - 1;k++)//star pattern
                cout << "*";
            cout << "\n";//newline character at the end of each line
        }
        else{
            for (int j = 0; j < i - n;j++)
                cout << " ";
            for (int k = 0; k < 2 * (n-(i%n))-1;k++)
                cout << "*";
            cout << "\n";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
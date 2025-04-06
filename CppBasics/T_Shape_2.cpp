#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n - i - 1;j++)//preceeding space
            cout << " ";
        for (int k = 0; k < 2 * (i + 1) - 1;k++)//star pattern
            cout << "*";
        cout << "\n";//newline character at the end of each line
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
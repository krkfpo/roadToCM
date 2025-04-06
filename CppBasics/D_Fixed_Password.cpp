#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    while(1){
        cin >> n;
        if(n==1999){
            cout << "Correct";
            return;
        }
        else{
            cout << "Wrong\n";
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
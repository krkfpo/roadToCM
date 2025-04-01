#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin >> a>> b;
    string ans = (a >= b ) ? "Yes" : "No";
    cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}
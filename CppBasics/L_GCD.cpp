#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b % a, a);
}

void solve(){
    int a,b;
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << ans;
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
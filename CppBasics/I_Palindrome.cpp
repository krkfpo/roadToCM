#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,tmp;
    cin >> n; 
    tmp = n;
    int reverse=0;

    while(tmp){
        int d = tmp % 10;
        reverse = reverse*10 + d;
        tmp /= 10;
    }
    cout << reverse << "\n";
    if(reverse==n)
        cout << "YES";
    else
        cout << "NO";
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
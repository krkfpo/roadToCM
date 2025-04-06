#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int start = max(l1, l2),end=min(r1, r2);
    if(start<=end)
        cout << start<<" "<<end;
    else
        cout << "-1";
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
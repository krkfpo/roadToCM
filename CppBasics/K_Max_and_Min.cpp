#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    cin >>a >> b >> c;
    int min_element = min(a, min(b, c));
    int max_element = max(a, max(b, c));
    cout << min_element << " " << max_element;
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
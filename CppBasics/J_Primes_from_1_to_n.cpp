#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    bool is_prime = true;
    for (int i = 2; i * i <= n;i++){
        if(n%i==0){
            is_prime = false;
            return is_prime;
        }
    }
    return is_prime;
}

void solve(){
    int n;
    cin >> n;
    for (int i = 2; i <= n;i++){
        if(is_prime(i))
            cout << i << " ";
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
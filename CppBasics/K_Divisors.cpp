#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> factors = {1, n};
    for (int i = 2; i * i <= n;i++){
        if(n%i==0){
            if(n/i == i)
                factors.push_back(i);
            else{
                factors.push_back(i);   
                factors.push_back(n/i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    for(int num : factors)
        cout << num << "\n";
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
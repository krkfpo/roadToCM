#include <bits/stdc++.h>
using namespace std;

void solve(){
    int num;
    long long ans=1;
    cin >> num;
    if(num==0||num==1)
        cout << "1\n";
    else{
        for (int i = 2; i <= num;i++)
        {
            ans *= i;
        }
        cout << ans << "\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
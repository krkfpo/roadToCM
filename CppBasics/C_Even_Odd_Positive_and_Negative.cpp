#include<bits/stdc++.h>
using namespace std;
void solve(){
    int N,num;
    int even = 0, odd = 0, pos = 0, neg = 0;
    cin >> N;
    while(N--){
        cin >> num;
        if(num>0)
            pos++;
        else if(num<0)
            neg++;
        if(num%2)
            odd++;
        else
            even++;
    }
    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << pos << "\n";
    cout << "Negative: " << neg << "\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
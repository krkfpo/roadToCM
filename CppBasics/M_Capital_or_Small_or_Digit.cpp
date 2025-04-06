#include <bits/stdc++.h>
using namespace std;

void solve(){
    char ch;
    cin >> ch;
    if(ch>=48 && ch<=57){
        cout << "IS DIGIT";
    }
    else{
        cout << "ALPHA\n";
        if(ch>=65 && ch<=90)
            cout << "IS CAPITAL";
        else if(ch>=97 &&ch<=122)
            cout << "IS SMALL";
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
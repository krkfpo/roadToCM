#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653

void solve(){
    // fix how many digits you want to print after decimal
    cout << fixed << setprecision(9); 
    // your code
    double R;
    cin >> R;
    double area = pow(R,2)*PI;
    cout << area;
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
// Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
// Print "Origem" If the point is at the origin.
// Print "Eixo X" If the point is over X axis.
// Print "Eixo Y" if the point is over Y axis.
#include<bits/stdc++.h>
using namespace std;

void solve(){
    double x, y;
    cin >> x >> y;
    //cout << x << y;
    if(x>0){
        if(y>0){
            cout << "Q1";
        }
        else if(y==0){
            cout << "Eixo X";
        }
        else{
            cout << "Q4";
        }
    }
    else if(x==0){
        if(y!=0)
            cout << "Eixo Y";
        else
            cout << "Origem";
    }
    else{//x<0
        if(y>0){
            cout << "Q2";
        }
        else if(y==0){
            cout << "Eixo X";
        }
        else{
            cout << "Q3";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}
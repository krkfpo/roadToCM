#include<bits/stdc++.h>
using namespace std;

int numberize(string s, int a, int b){
    int num = 0;
    for (int i = a; i < b;i++){
        num *= 10;
        num += (s[i] - '0');
    }
    return num;
}


void solve (){
    string expr;
    cin >> expr;

    int n = expr.length();
    char op;
    int pos,ans=0;
    for (int i = 0; i < n ;i++)
    {
        char ch = expr[i];
        if(ch=='+'|| ch=='-'||ch=='*'|| ch=='/'){
            op = ch;
            pos = i;
        }
    }
    if(op == '+'){
            ans = numberize(expr,0, pos) + numberize(expr,pos + 1, n);
        }
		else if(op == '-'){
            ans = numberize(expr,0, pos) - numberize(expr,pos + 1, n);
        }
        else if(op == '*'){
            ans = numberize(expr,0, pos) * numberize(expr,pos + 1, n);
        }
        else{
        	ans = numberize(expr,0, pos) / numberize(expr,pos + 1, n);
        }
    cout << ans;
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
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>&arr){
    int n = arr.size();
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n - i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}
void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    //sort(arr.begin(), arr.end());//forbidden for this question
    bubble_sort(arr);
    for(int i:arr)
        cout << i << " ";
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
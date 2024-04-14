// A. Launch of Collider

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    // ios_base::sync_with_stdio(0);cin.tie(0); 
    int n; cin >> n;
    string s; cin >> s;
    int arr[n], nowr, res = INT_MAX; bool flag = 0;
    for (auto &e : arr) cin >> e;
    for (int i = 0; i<n; i++){
        char ch = s[i];
        if (ch == 'R'){
            flag = 1;
            nowr = arr[i];
        }
        if (flag && ch == 'L'){
            res = min(res, abs(nowr- arr[i])/2);
        }
    }
    cout << (res == INT_MAX ? -1 : res);
    return 0;
}
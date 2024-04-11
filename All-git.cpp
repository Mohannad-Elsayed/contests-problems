#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    long long n, ans = 0; cin >> n;
    int arr[n]; for (auto& e : arr) cin >> e;
    sort(arr, arr+n);
    for (auto e : arr){
        if (e > ans+1) return (cout << ans+1), 0;
        ans += e;
    }
    cout << ans+1;
    return 0;
}
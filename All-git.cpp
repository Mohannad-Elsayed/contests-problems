// Square diff 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    auto p = [&](ll x){
        if (x < 1 || x == 4) return false;
        if (x == 2 || x == 3) return true;
        if (!(x%2) || !(x%3)) return false;
        for (ll i = 5; i*i<=x; i+=2) if (!(x%i)) return false;
        return true;
    };
    while(n--){
        ll a, b; cin >> a >> b;
        if (a-b == 1 && p(a+b)) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}
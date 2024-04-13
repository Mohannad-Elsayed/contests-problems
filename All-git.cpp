#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gccd(ll a, ll b){
    if (!b) return a;
    return gccd(b, a%b);
}
ll lccm(ll a, ll b){
    return (a*b)/gccd(a, b);
}

// ll lccm(ll a, ll b, ll c){
//     return c*((a*b)/gccd(a, b))/(gccd(c, (a*b)/gccd(a, b)));
// }
// ll lccm(ll a, ll b, ll c, ll d){
//     return d*(c*((a*b)/gccd(a, b))/(gccd(c, (a*b)/gccd(a, b))))/gccd(d, c*((a*b)/gccd(a, b))/(gccd(c, (a*b)/gccd(a, b))));
// }
// ll lccm(ll a, ll b, ll c, ll d, ll e){
//     return d*(c*((a*b)/gccd(a, b))/(gccd(c, (a*b)/gccd(a, b))))
//     /gccd(d, c*((a*b)/gccd(a, b))/(gccd(c, (a*b)/gccd(a, b))));
// }

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tt; cin >> tt; 
    while(tt--){
        ll n, m, a, d; cin >> n >> m >> a >> d;
        vector<ll> v;
        for (int i = 0; i<5; i++) v.push_back(a+i*d);
        // for (auto x : v) cout << x << ' ';
        // m--;
        ll alllcm = v[0];
        for (int i = 1; i<5; i++){
            alllcm = lccm(alllcm, v[i]);
        }
        ll res1 = n-(n/alllcm), res2 = m-(m/alllcm);
        for (int i = 0; i<5; i++){
            res1 -= (n/v[i]);
            res2 -= (m/v[i]);
        }
        for (int i = 0; i<5; i++){
            for (int j = i+1; j<5; j++){
                res1 += (n/(lccm(v[i], v[j])));
                res2 += (m/(lccm(v[i], v[j])));
            }
        }
        for (int i = 0; i<5; i++){
            for (int j = i+1; j<5; j++){
                ll lcm1 = lccm(v[i], v[j]);
                for (int k = j+1; k<5; k++){
                    res1 -= (n/(lccm(v[k], lcm1)));
                    res2 -= (m/(lccm(v[k], lcm1)));
                }
            }
        }
        for (int i = 0; i<5; i++){
            for (int j = i+1; j<5; j++){
                ll lcm1 = lccm(v[i], v[j]);
                for (int k = j+1; k<5; k++){
                    ll lcm2 = lccm(lcm1, v[k]);
                    for (int l = k+1; l<5; l++){
                        res1 += (n/(lccm(v[l], lcm2)));
                        res2 += (m/(lccm(v[l], lcm2)));
                    }
                }
            }
        }
        cout << res2 - res1 << '\n';
    }
    return 0;
}
// C. Inhabitant of the Deep Sea
// Codeforces - Codeforces Round 938 (Div. 3)
// https://codeforces.com/contest/1955/problem/C
// 2024-04-08 16:59:05

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb emplace_back
#define pf emplace_front
#define lwb lower_bound
#define upb upper_bound
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define forn(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rofn(i,a,b) for(ll i=(ll)(a);i>(ll)(b);i--)
const ll MOD {1000000007};
si solve(){
    ll n, k; cin >> n >> k;
    deque<ll> dq(n); each(x, dq) cin >> x;
    ll cnt = 0, curr = (k+1)/2;
    ll l = dq.front(), r = dq.back(), mix = n;
    forn(i, 0, n){
    	if (curr >= dq[i]){
    		curr -= dq[i];
    		dq[i] = 0;
    	}
    	else{
    		dq[i] -= curr;
    		mix = i;
    		break;
    	}
    }
    curr = k/2;
    rofn(i, n-1, mix-1){
    	if (curr >= dq[i]){
    		dq[i] = 0;
    		curr -= dq[i];
    	}
    	else{
    		dq[i] -= curr;
    		break;
    	}
    }
    each(x, dq) if (!x) cnt++;
    cout << cnt;
    return 0;
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}
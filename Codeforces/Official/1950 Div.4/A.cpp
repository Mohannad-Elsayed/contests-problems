// A. Stair, Peak, or Neither?
// Codeforces - Codeforces Round 937 (Div. 4)
// https://codeforces.com/contest/1950/problem/0
// 2024-03-28 16:45:25

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << iostream"NO";
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
#define forn(i,a,b) for(llu i=(llu)(a);i<(llu)(b);i++)
#define rofn(i,a,b) for(llu i=(llu)(a);i>(llu)(b);i--)
const ll MOD {1000000007};
si solve(){
    vector<int> v(3);
    each(x, v) cin >> x;
    if (v[0] < v[1] && v[1] < v[2]){
    	cout << "STAIR";
    } else if (v[0] < v[1] && v[1] > v[2]) cout << "PEAK";
    else cout << "NONE";
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
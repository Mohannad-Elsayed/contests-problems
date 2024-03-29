// C. Clock Conversion
// Codeforces - Codeforces Round 937 (Div. 4)
// https://codeforces.com/contest/1950/problem/C
// 2024-03-28 16:52:20

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
    int h, m; char c; cin >> h >> c >> m;
    bool f = 0;
    if (h >= 12){
    	h-=12;
    	h%=12;
    	f = 1;
    }
    if (h == 0) h = 12;
    string hh, mm; hh = to_string(h); mm = to_string(m);
    if (hh.size() < 2) hh = '0'+hh;
    if (mm.size() < 2) mm = '0'+mm;
    cout << hh << ':' << mm << ' ';
    cout << (!f ? "AM" : "PM");
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
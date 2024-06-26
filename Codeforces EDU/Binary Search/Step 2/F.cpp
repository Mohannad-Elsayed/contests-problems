// F. String Game
// Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
// 2024-03-31 10:07:26

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
    string s, t; cin >> s >> t;
    int l = 0, r = s.size(), m;
    int arr[r]; forn(i, 0, r) cin >> arr[i];
    auto ok = [&](int m) -> bool{
    	// t is a sub from s
    	string tmp = s;
    	forn(i, 0, m) tmp[arr[i]-1] = '-';
    	stack<char> ss;
    	each(ch, tmp) ss.push(ch);
    	stack<char> tt;
    	each(ch, t) tt.push(ch);
    	while(!ss.empty()){
    		if (ss.top() == tt.top()) tt.pop();
    		ss.pop();
    		if (tt.empty()) return 1; 
    	}
    	return 0;
    };
    int n = r;
    forn(i, 0, n+1){
    	m = i;
    	if (!ok(m)) return (cout << i-1),0;
    }
    return 0;
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    // cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}
// Problem: A. Maximum Subarray Sum
// Contest: Codeforces - Algorithms and Techniques
// URL: https://codeforces.com/group/9QrbarK7qH/contest/449618/problem/A
// When: 2024-03-07 06:04:52

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ll n; cin >> n; ll arr[n];
    forn(i, 0, n) cin >> arr[i];
    ll res = INT_MIN, mx = 0;
    forn(i, 0, n){
    	mx += arr[i];
    	if (res < mx){
    		res = mx;
    	}
    	if (mx < 0) mx = 0;
    }
    cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    // cin >> test;
    // cout << "# " << test << '\n';
    while(test--){
      solve();
      cout << '\n';
    }
}
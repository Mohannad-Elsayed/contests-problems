// Problem: P. Books
// Contest: Codeforces - Binary Search
// URL: https://codeforces.com/group/9QrbarK7qH/contest/443000/problem/P
// When: 2024-03-06 14:50:56

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
    ll n, k, sum = 0, mxlen = 0; cin >> n >> k; ll arr[n];
    forn(i, 0, n) cin >> arr[i]; 
    
    ll l = 0, r = 0;
    while(r<n){
    	if (sum < k){
    		sum += arr[r];
    		if (sum <= k) mxlen = max(mxlen, r-l+1);
    		r++;
    	}
    	else {
    		sum -= arr[l];
    		l++;
    	}
    }
    cout << mxlen;
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
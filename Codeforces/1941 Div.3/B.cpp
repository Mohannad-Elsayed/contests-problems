// Problem: B. Rudolf and 121
// Contest: Codeforces - Codeforces Round 933 (Div. 3)
// URL: https://codeforces.com/contest/1941/problem/B
// When: 2024-03-11 16:41:37

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES"
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
#define MOD 1000000007
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, tmp, mx = INT_MIN; cin >> n;
    int arr[n];
    
    
    forn(i, 0, n){
    	cin >> arr[i];
    }
    forn(i, 0, n-2){
		arr[i+1] -= arr[i]*2;
		arr[i+2] -= arr[i];
		arr[i] = 0;
		if (arr[i+1] < 0 || arr[i+2] < 0) return (cout << "NO"), 0;
		    	
    }
    if (arr[n-1] || arr[n-2]) return (cout << "NO"), 0;
    ys;
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}
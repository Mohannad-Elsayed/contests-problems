// C. Flag
// Codeforces - Week#3 Contest
// https://codeforces.com/group/42BcTs2lav/contest/406964/problem/C
// 2024-03-26 16:27:52

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
	int n, m;cin >> n >> m;
  	char arr[n][m]; 
  	forn(i, 0, n) forn(j, 0, m) cin >> arr[i][j];
  	forn(i, 0, n){
  		forn(j, 1, m){
  			if (arr[i][j] != arr[i][j-1]){
  				
  				return (cout << "NO"), 0;
  			}
  		}
  		if (i>0 && arr[i][0] == arr[i-1][0]){
  			return (cout << "NO"), 0;
  		}
  	} 
  	return (cout << "YES"), 0;
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
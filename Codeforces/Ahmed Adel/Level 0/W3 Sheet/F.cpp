// F. Magic World
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/F
// 2024-03-27 20:56:31

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
    int n, mx = INT_MIN, residx = -1; cin >> n; n++;
    int a[n][4];
    forn(i, 1, n){
    	cin >> a[i][0];
    } forn(i, 1, n){
    	cin >> a[i][1];
    } forn(i, 1, n){
    	cin >> a[i][2];
    } forn(i, 1, n){
    	cin >> a[i][3];
    }
    forn(i, 1, n){
    	int curr = (a[i][0]/a[i][1] + (a[i][0]%a[i][1])/(a[i][2]*a[i][3]));
    	curr = max(curr, (a[i][0]/(a[i][2]*a[i][3]) + (a[i][0]%(a[i][2]*a[i][3]))/a[i][1]));
    	// cout << curr << endl;
    	if (curr > mx){
    		mx = curr;
    		residx = i;
    	}
    }
    cout << residx;
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
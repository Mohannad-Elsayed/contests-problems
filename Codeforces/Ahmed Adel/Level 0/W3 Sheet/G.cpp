// G. Heimerdinger and The Treasure
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/G
// 2024-03-27 21:15:48

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
int dx[4] = {1, 0, -1,  0}, 
dy[4] =     {0, 1,  0, -1};
const ll MOD {1000000007};
si solve(){
    int n, m; cin >> n >> m;
	vector<pair<int, int>> v;
	char arr[n][m];
	forn(i, 0, n){
		forn(j, 0, m){
			cin >> arr[i][j];
			if (arr[i][j] == 'S'){
				v.emplace_back(make_pair(i, j));
			}
		}
	}
	
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
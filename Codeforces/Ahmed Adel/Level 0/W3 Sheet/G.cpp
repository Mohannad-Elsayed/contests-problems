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
int dx[4] = {0, 0, -1,  1}, 
    dy[4] = {-1, 1,  0, 0};
const ll MOD {1000000007};
void p(int i, int j){
	cout << i+1 << ' ' << j+1 << '\n';
}
si solve(){
    int n, m; cin >> n >> m;
	set<pair<int, int>> vis;
	int li, lj;
	char arr[n][m];
	forn(i, 0, n){
		forn(j, 0, m){
			cin >> arr[i][j];
			if (arr[i][j] == 'S'){
				p(i, j);
				vis.insert({i, j});
				li = i, lj = j;
			}
		}
	}
	int iters = 500*500;
	while(iters--){
		// cout << "\n" << li << ' ' << lj << '\n';
		forn(i, 0, 4){
			int nx = li, ny = lj;
			nx += dx[i];
			ny += dy[i];
			// cout << "here " << nx << ' ' << dx[i] << ' ' << ny << ' ' << dy[i] << '\n';
			if (nx >= n || nx < 0 || ny >= m || ny < 0 || vis.count(make_pair(nx, ny))) continue;
			if (arr[nx][ny] == '*'){
				p(nx, ny);
				vis.insert(make_pair(nx, ny));
				li =  nx, lj = ny;
				break;
			}
			if (arr[nx][ny] == 'O'){
				p(nx, ny);
				return 0;
			}
		}
		// cout << "\n\n";
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
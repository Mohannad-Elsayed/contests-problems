// B. Upscaling
// Codeforces - Codeforces Round 937 (Div. 4)
// https://codeforces.com/contest/1950/problem/B
// 2024-03-28 16:47:53

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
    int n; cin >> n;
    n*=2;
    char arr[n][n];
    for (int i = 0; i<n; i+=2){
    	for (int j = 0; j<n; j+=2){
    		char c = '.';
    		(((i/2)%2 && (j/2)%2) || (!((i/2)%2) && !((j/2)%2))) ? c = '#' : c = '.';
    		arr[i][j] = c;
    		arr[i][j+1] = c;
    		arr[i+1][j] = c;
    		arr[i+1][j+1] = c;
    		
    	}	
    }
    forn(i, 0, n){
    	forn(j, 0, n){
    		cout << arr[i][j];
    	} cout << '\n';
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	// cout << '\n';
    }
    return 0;
}
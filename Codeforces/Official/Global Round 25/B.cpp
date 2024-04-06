// B. Battle Cows
// Codeforces - Codeforces Global Round 25
// https://codeforces.com/contest/1951/problem/B
// 2024-04-06 16:58:32

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
    int n, k; cin >> n >> k;
    vector<int> arr(n); each(e, arr) cin >> e;
    int cnt = 0, curr = arr[0]; int val = arr[k-1];
    int res1 = 0, res2 = 0;
    int pos = 0;
    if (k == 1){
    	forn(i, 1, n){
    		if (arr[i] < curr) res1++;
    		else break;
    	}
    }
    else{
    	forn(i, 0, k){
    		if (arr[i] > arr[k-1]){
    			pos = i;
    			break;
    		}
    	}
    }
    swap(arr[k-1], arr[pos]);
    val = arr[pos];
    curr = arr[0];
    // each(x, arr) cout << x << ' ';
    forn(i, 1, n){
    	if (arr[i] > curr) curr = arr[i];
    	if (curr == val) res2++;
    }
    cout << max(res1, res2);
    return 0;
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
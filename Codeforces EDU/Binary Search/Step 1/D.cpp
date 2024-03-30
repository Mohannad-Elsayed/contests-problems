// D. Fast search
// Codeforces - ITMO Academy: pilot course - Binary Search - Step 1
// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
// 2024-03-30 08:33:23

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
#define forn(i,a,b) for(llu i=(llu)(a);i<(llu)(b);i++)
#define rofn(i,a,b) for(llu i=(llu)(a);i>(llu)(b);i--)
const ll MOD {1000000007};
si solve(){
    int n, q;cin >> n;
    // maintain 2 pointers, l & r, while bounds are a, b
    // such that  arr[l] < a && arr[l+1] >= a
    // and arr[r] > b && arr[r-1] <= b
    deque<int> dq(n);
    forn(i, 0, n) cin >> dq[i];
    dq.emplace_back(INT_MAX);
    dq.emplace_front(INT_MIN);
    n = dq.size()-1;
    // sort the data structure
    sort(all(dq));
    cin >> q;
    while(q--){
    	int i, j; cin >> i >> j;
    	int l = 0, r = n, m, i1, i2;
    	while(l<=r){
    		m = (l+r)/2;
    		if (dq[m] < i){
    			l = m+1;
    			i1 = m;
    		} else r = m-1;
    	}
    	l = 0, r = n;
    	while(l<=r){
    		m = (l+r)/2;
    		if (dq[m] > j){
    			i2 = m; 
    			r = m-1;
    		} else l = m+1;
    	}
    	i1++;i2--;
    	// cout << i1 << ' ' << dq[i1] << '\n' << 
    	// i2 << ' ' << dq[i2] << '\n';
    	cout << i2-i1+1 << " ";
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
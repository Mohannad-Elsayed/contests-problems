// Problem: C. Rudolf and the Ugly String
// Contest: Codeforces - Codeforces Round 933 (Div. 3)
// URL: https://codeforces.com/contest/1941/problem/C
// When: 2024-03-11 16:55:47

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
#define MOD 1000000007
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    
    		// mmapp
    		// pppiepieeee
    int n, cnt = 0; cin >> n;
    string arr; cin >> arr;
    n = arr.size();
    forn(i, 0, n){
    	if (arr[i] == 'm'){
    		if (i+1 < n && arr[i+1] == 'a'){
    			if (i+2 < n && arr[i+2] == 'p'){
    				cnt++;
    				i += 2;
    				// while(i < n && arr[i] == 'p'){
    					// i++;
    				// }
					// cout << i << ' ' << arr[i] << '\n';
    				
    			}
    		}
    	}
		else if (arr[i] == 'p'){
    		if (i+1 < n && arr[i+1] == 'i'){
    			if (i+2 < n && arr[i+2] == 'e'){
    				cnt++;
    				i += 2;
    				// while(i < n && arr[i] == 'e'){
    					// i++;
    				// }
    				// i--;
    				
					// cout << i << ' ' << arr[i] << '\n';
    			}
    		}
    	}
    }
    cout << cnt;
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
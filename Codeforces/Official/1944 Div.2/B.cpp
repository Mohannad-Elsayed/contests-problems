// B. Equal XOR
// Codeforces - Codeforces Round 934 (Div. 2)
// https://codeforces.com/contest/1944/problem/B
// 2024-03-16 16:56:19

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
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define MOD 1000000007
struct f{
	int freq, ai, bi;
};
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, k, tmp; cin >> n >> k;
    map<int, int> fa, fb; vector<int> da, db;
    set<int> a, b;
    forn(i, 0, n){
    	cin >> tmp;
    	fa[tmp]++;
    	a.insert(tmp);
    	if (fa[tmp] > 1){
    		a.erase(tmp);
    		da.pb(tmp);
    	}
    }
	forn(i, 0, n){
    	cin >> tmp;
    	fb[tmp]++;
    	b.insert(tmp);
    	if (fb[tmp] > 1){
    		b.erase(tmp);
    		db.pb(tmp);
    	}
    }
    vector<int> comm;
    each(x, b){
    	if (a.count(x)) comm.pb(x);
    }
    int dubb = 0, com = 0;
    for(int i = 0; i<min((int)da.size(), k); ++i){
    	cout << da[i] << ' ' << da[i] << ' '; dubb++;
    }
    for(int i = 0; i<(k-dubb)*2; ++i){
    	cout << comm[i] << ' '; com++;
    } cout << '\n';
    for(int i = 0; i<dubb; ++i){
    	cout << db[i] << ' ' << db[i] << ' ';
    }
    forn(i, 0, com) cout << comm[i] << ' ';
    
    // cout << "dub" << dubb;
    // each(x, comm) cout << x << ' ';
    
	/*
    int xo = 0;
    forn(i, 0, 2*k){
    	xo ^= arr1[i];
    }
    mp[xo].freq = 1; mp[xo].ai = 0;
    forn(i, 2*k, n/2){
    	// cout << "here1 " << xo << '\n';
    	xo ^= arr1[i];
    	xo ^= arr1[i-2*k];
    	mp[xo].freq = 1; mp[xo].ai = i-2*k+1;
    }
    xo = 0;
    forn(i, 0, 2*k){
    	xo ^= arr2[i];
    }
    mp[xo].freq++; mp[xo].bi = 0;
    forn(i, 2*k, n/2){
    	// cout << "here2 " << xo << '\n';
    	xo ^= arr2[i];
    	xo ^= arr2[i-2*k];
    	mp[xo].freq++; mp[xo].bi = i-2*k+1;
    	if (mp[xo].freq > 1){
    		// cout << "res: " << xo << '\n';
    		forn(i, mp[xo].ai, mp[xo].ai+2*k){
    			cout << arr1[i] << ' ';
    		} cout << '\n';
    		
    		forn(i, mp[xo].bi, mp[xo].bi+2*k){
    			cout << arr2[i] << ' ';
    		}
    		return 0;
    	}
    }
    each(x, mp){
    	if (x.S.freq > 1){
    		forn(i, x.S.ai, x.S.ai+2*k){
    			cout << arr1[i] << ' ';
    		} cout << '\n';
    		
    		forn(i, x.S.bi, x.S.bi+2*k){
    			cout << arr2[i] << ' ';
    		}
    		return 0;
    	}
    	// cout << " here : " << x.F << ' ' << x.S.ai << '\n';
    }*/
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    cin >> test;
    forn(i, 1, test+1){
    	// cout << "# -------" << i << '\n';
      	solve();
      	cout << '\n';
    }
}
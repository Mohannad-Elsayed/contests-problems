// C. Suffix Structures
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/C
// 2024-03-27 16:59:30

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
    string s, t; cin >> s >> t;
    stack<char> ss, tt; 
    each(ch, s) ss.push(ch);
    each(ch, t) tt.push(ch);
    
    //check size, if t > s, it's need tree
    // then check subsequence
    bool sub = false;
    if (s.size() < t.size()) return (cout <<"need tree"), 0;
    else {
    	while(!ss.empty()){
    		if (ss.top() == tt.top()) tt.pop();
    		if (tt.empty()) break;
    		ss.pop();
    	}
    	if (tt.empty()) sub = 1;	
    }
    // if t is a subsequence of s, then it's automaton
    if (sub) return (cout << "automaton"), 0;
    
    int es = (s.size() == t.size()), bf = 0;
    int frs[256]{}, frt[256]{};
    each(ch, s) frs[ch]++;
    each(ch, t) frt[ch]++;
    forn(i, 95, 124){
    	if (frt[i] > frs[i]) bf = 1;
    }
    
    // if a character is more frequent in t than in s, it's need tree
    if (bf) return (cout <<"need tree"), 0;
    
    // if their sizes are equal, it's array (implies same frequency)
    if (es) return (cout << "array"), 0;
    
    // here, their sizes are not equal (s > t) need removal and rearrangement
    return (cout << "both"), 0;
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
// B. Regular Bracket Sequence
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int N = 1e6+10;
int main(){
    int v[11][N]; 
    v[0][1] = 0;
    for (int i = 2; i < N; i++){
        int tmpi = i, p = 0;
        for (ll j = 2; j*j<=tmpi; j++){
            if (!(tmpi%j)){
                p++;
                while(!(tmpi%j)) tmpi/=j;
            }
        }
        if (tmpi != 1) p++;
        cout << p << '\n';
        v[p][i] = 1;
    }
    int n; cin >> n;
    while(n--){
        int l, r, t; cin >> l >> r >> t;
        cout << v[t][l-1] << ' ';
    }
    return 0;
}
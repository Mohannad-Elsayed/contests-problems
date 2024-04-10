// A. Almost Prime
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin >> n;
    int N = 3010;
    vector<int> v(N);
    for (int i = 2; i<N; i++){
        int tmpi = i;
        set<int> p;
        for (int j = 2; j*j<=tmpi; j++){
            if (tmpi%j) continue;
            p.insert(j);
            while(!(tmpi%j)) tmpi /= j;
        }
        if (tmpi != 1) p.insert(tmpi);
        if (p.size() == 2){
            v[i] = 1;
            // cout << i << '\n';
        }
    }
    for (int i = 1; i<3010; i++) v[i] += v[i-1];
    cout << v[n];
}
// C. Hossam and Trainees
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int slv(){
    int n, tmp; 
    cin >> n;
    int N = 31700;
    vector<int> primes;
    vector<bool> siev(N, true);
    for (int i = 2; i*i<=N; i++){
        if (siev[i]){
            for (int j = i*i; j<=N; j+=i) siev[j] = false;
        }
    }
    for (int i = 2; i<=N; ++i) if (siev[i]) primes.push_back(i);
    // for (auto x : primes) cout << x << ' ';
    unordered_set<int> uste; unordered_map<int, int> mp;
    int arr[n];
    for (int i = 0; i<n; ++i){cin >> arr[i];}

    for (auto x : arr){
        bool ent = false;
        for (auto p : primes){
            if(!(x%p)){
                ent = true;
                mp[p]++;
            }
        }
        if (!ent) mp[x]++;
    }

    for (auto [x, y] : mp) if (y > 1) {return (cout << "YES"), 0;}

    // for (int i = 0; i<n; ++i){
    //     if (mp[arr[i]] > 1) return (cout << "YES"), 0;
    //     for (auto x : primes){
    //         if (!(arr[i]%x)){
    //             if (uste.count(x)){
    //                 // cout << arr[i] << ' ' << x << '\n';
    //                 return (cout << "YES"), 0;
    //             }
    //             uste.insert(x);
    //         }
    //     }
    // }
    cout << "NO";
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        slv();
        cout << '\n';
    }
}

/*

2
3
32 48 7
3
14 5 9

*/
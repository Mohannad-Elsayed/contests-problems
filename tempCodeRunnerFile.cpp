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
    unordered_set<int> uste, input;
    int arr[n];
    for (int i = 0; i<n; ++i){cin >> arr[i]; input.insert(arr[i]);}
    for (int i = 0; i<n; ++i){
        if (input.count(arr[i])) return (cout << "YES"), 0;
        for (auto x : primes){
            if (!(arr[i]%x)){
                if (uste.count(x)){
                    // cout << arr[i] << ' ' << x << '\n';
                    return (cout << "YES"), 0;
                }
                uste.insert(x);
            }
        }
    }
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
// B. Regular Bracket Sequence
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s; cin >> s;
    int n = s.size();
    int cnt = 0;
    stack<char> stk;
    for (auto ch : s){
        if (ch == '('){
            stk.push(ch);
        }
        else{
            if (stk.empty()) cnt++;
            else stk.pop();
        }
    }
    cout << n-(cnt + stk.size());
    return 0;
}
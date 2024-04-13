// A. Help Vasilisa the Wise 2

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); 
    int r1, r2, c1, c2, d1, d2; 
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for (int xx = 1; xx <= 9; xx++){
        for (int xy = 1; xy <= 9; xy++){
            for (int yx = 1; yx <=9; yx++){
                for (int yy = 1; yy<=9; yy++){
                    set<int> ste;
                    ste.insert(xx);
                    ste.insert(xy);
                    ste.insert(yx);
                    ste.insert(yy);
                    if (
                        xx+yx == c1 &&
                        xx+xy == r1 &&
                        xx+yy == d1 &&
                        xy+yy == c2 &&
                        yx+yy == r2 &&
                        xy+yx == d2 && 
                        ste.size() == 4
                    )
                    return (cout << xx << ' ' << xy << '\n' << yx << ' ' << yy), 0;
                }
            }
        }
    }
    cout << -1;

    return 0;
}

/*

3 7
4 6
5 5


*/
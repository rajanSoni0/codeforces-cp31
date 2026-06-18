#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        int kx, ky;
        cin >> kx >> ky;
        int qx, qy;
        cin >> qx >> qy;
        set<pair<int, int>> king;
        set<pair<int, int>> queen;

        for(int sx : {-1, 1}) {
            for(int sy : {-1, 1}) {
                king.insert({kx + sx * x, ky + sy * y});
                king.insert({kx + sx * y, ky + sy * x});

                queen.insert({qx + sx * x, qy + sy * y});
                queen.insert({qx + sx * y, qy + sy * x});
            }
        }

        int ans = 0;
        for(auto p : king) {
            if(queen.count(p))
                ans++;
        }

        cout << ans << endl;

    }
}
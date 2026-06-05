#include<iostream>
#include<vector>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            arr[i] = num;
        }
        int max_dis = 0;
        int last_station = 0;
        for(int i = 0; i < n; i++) {
            max_dis = max(arr[i] - last_station, max_dis);
            last_station = arr[i];
        }

        max_dis = max((x - arr[n - 1]) * 2, max_dis);
        cout << max_dis << endl;
    }
}
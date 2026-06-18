#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool solve(vector<int> &nums) {
    unordered_map<int, int> mp;
    for(int num : nums) {
        mp[num]++;
    }
    if(mp.size() > 2) return false;
    if(mp.size() == 1) return true;
    auto it = mp.begin();
    int f1 = it->second;
    it++;
    int f2 = it->second;

    return abs(f1 - f2) <= 1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            arr[i] = num;
        }
        if(solve(arr)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

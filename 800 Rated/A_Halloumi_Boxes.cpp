#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> &arr) {
    int n = arr.size();
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            arr[i] = num;
        }

        if(k == 1 && !isSorted(arr)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
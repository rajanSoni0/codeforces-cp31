#include<iostream>
#include<vector>
using namespace std;

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
        if(arr[0] == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
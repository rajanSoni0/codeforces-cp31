#include<iostream>
#include<vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> freq(26, 0);
        for(char ch : s) {
            freq[ch - 'a']++;
        }
        int odd_freq = 0;
        for(int f : freq) {
            if(f % 2 == 1) {
                odd_freq++;
            }
        }
        odd_freq > k + 1 ? cout << "No" << endl : cout << "Yes" << endl;
    
    }
}
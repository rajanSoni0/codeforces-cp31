#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        for(int i = 0; i < n; i++) {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }
        
        int curr_empty_cnt = 0;
        int total_ops = 0;
        for(char &ch : s) {
            if(ch == '#') {
                if(curr_empty_cnt == 0) {
                    continue;
                }
                else if(curr_empty_cnt == 1) {
                    total_ops++;
                }
                else {
                    total_ops += 2;
                }
                curr_empty_cnt = 0;
            }
            else {
                curr_empty_cnt++;
                if(curr_empty_cnt == 3) {
                    total_ops = 2;
                    curr_empty_cnt = 0;
                    break;
                }
            }
        }
        if(curr_empty_cnt != 0) {
            if(curr_empty_cnt == 0) {
                continue;
            }
            else if(curr_empty_cnt == 1) {
                total_ops++;
            }
            else {
                total_ops += 2;
            }
        }
        cout << total_ops << endl;
    }
}
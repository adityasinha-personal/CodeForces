//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        
        int zeros = 0, ones = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                zeros++;
            } else {
                ones++;
            }
        }
        if (min(ones, zeros) % 2 == 0) {
            cout << "NET\n";
        } else {
            cout << "DA\n";
        }
    }
    return 0;
}

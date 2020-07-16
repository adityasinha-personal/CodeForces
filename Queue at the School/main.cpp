//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    string s;
    
    cin >> n >> t;
    cin >> s;
    
    while(t--) {
        for(int i = 0; i < n; i++) {
            int k = i + 1;
            if (k < n && s[i] == 'B' && s[k] == 'G') {
                s[i] = 'G';
                s[k] = 'B';
                i = k;
            }
        }
    }
    
    cout << s;
    return 0;
}

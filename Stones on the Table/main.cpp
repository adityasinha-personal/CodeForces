//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    
    cin >> n;
    cin >> s;
    
    int ans = 0;
    int i;
    for (i = 0; i < n; i++) {
        int k = i + 1;
        while (k < n && s[i] == s[k]) {
            ans++;
            k++;
        }
        i = k - 1;
    }
    
    cout << ans;
    return 0;
}

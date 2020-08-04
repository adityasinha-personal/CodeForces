//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        map<int , int> m;
        
        int n, a;
        cin >> n >> a;
        
        for (int i = 1; i <= n + a; i++) {
            m[i] = 0;
        }
        
        int input;
        for (int i = 0; i < n; i++) {
            cin >> input;
            m[input]++;
        }
        int v = 0;
        for (auto i : m) {
            if (i.second == 0) {
                v++;
                if (v == a) {
                    v = i.first;
                    break;
                }
            }
        }
        
        if (v + 1 <= n + a && m[v+1] >= 1) {
            cout << v + 1 << "\n";
        } else {
            cout << v << "\n";
        }
        
    }
    return 0;
}

//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    
    cin >> a >> b;
    
    if (a.size() == b.size()) {
        reverse(b.begin(), b.end());
        if (a == b) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        cout << "NO";
    }
    
    return 0;
}

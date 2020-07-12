//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;


int solve(string s) {
    unordered_map<char, int> um;
    for (int i = 0; i < s.size(); i++) {
        um[s[i]]++;
    }
    
    return um.size();
}

int main() {
    string s;
    cin >> s;
    
    int ans = solve(s);
    
    if (ans % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}

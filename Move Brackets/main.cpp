//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    
    cin >> t;
    
    while (t--) {
        stack<int> st;
        
        int n;
        string s;
        cin >> n;
        cin >> s;
        
        int ans = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ')' && !st.empty() && st.top() == '(') {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        while(!st.empty()) {
            st.pop();
            ans++;
        }
        
        cout << ans/2 << "\n";
    }
    return 0;
}

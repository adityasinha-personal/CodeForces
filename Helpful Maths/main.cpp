//
//  main.cpp
//  Helpful Maths
//
//  Created by Zomato on 12/07/20.
//  Copyright © 2020 Aditya. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    
    string ans;
    
    cin >> s;
    
    int one, two, three;
    one = two = three = 0;
    
    for (int i = 0; i < s.size(); i += 2) {
        if (s[i] == '1') {
            one++;
        } else if (s[i] == '2') {
            two++;
        } else {
            three++;
        }
    }
    
    while (one--) {
        ans += "1+";
    }
    
    while (two--) {
        ans += "2+";
    }
    
    while(three--) {
        ans += "3+";
    }
    
    if(ans.size() > 0) {
        cout << ans.substr(0, ans.size() - 1);
    } else {
        cout << ans;
    }
    
    return 0;
}

//
//  main.cpp
//  Petya-and-Strings
//
//  Created by Zomato on 12/07/20.
//  Copyright © 2020 Aditya. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    
    cin >> a >> b;
    
    int ans = 0;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i] || abs(a[i] - b[i]) == 32) {
            continue;
        } else {
            if (a[i] >= 97) {
                a[i] -= 32;
            }
            if (b[i] >= 97) {
                b[i] -= 32;
            }
            
            if (a[i] > b[i]) {
                ans = 1;
            } else {
                ans = -1;
            }
            break;
        }
    }
    
    cout << ans;
    return 0;
}

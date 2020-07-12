//
//  main.cpp
//  Bit++
//
//  Created by Zomato on 12/07/20.
//  Copyright © 2020 Aditya. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int solve(string str) {
    if (str[0] == '+' || str[2] == '+') {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    
    int n;
    cin >> n;
    
    int ans = 0;

    string str;
    while (n > 0) {
        cin >> str;
        
        ans += solve(str);
        n--;
    }
    
    cout << ans;
}

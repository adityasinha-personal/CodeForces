//
//  main.cpp
//  Beautiful Matrix
//
//  Created by Zomato on 12/07/20.
//  Copyright © 2020 Aditya. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a[5][5];
    int ans;
    
    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                ans = abs(i - 2) + abs(j - 2);
            }
        }
    }
    cout << ans;
}

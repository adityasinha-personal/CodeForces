//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    n++;
    int cp;
    unordered_map<char, int> um;
    
    bool a;
    
    while (true) {
        um.clear();
        a = true;
        cp = n;
        while(cp) {
            um[cp%10]++;
            cp /= 10;
        }
        
        for (auto item: um) {
            if (item.second > 1) {
                a = false;
                break;
            }
        }
        
        if (a) {
            break;
        } else {
            n++;
        }
    }
    
    cout << n;

    return 0;
}

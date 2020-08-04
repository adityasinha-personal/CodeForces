//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int solve (vector<int> arr, int k) {
    int ans = 1;
    int x = 1;
    unordered_map<int, int> visited;
    while (true) {
        for (int i = 0; i < arr.size(); i++) {
            if (visited[i] == 0 && arr[i] % k != 0 && (arr[i] + x) % k == 0) {
                ans++;
                visited[i]++;
                arr[i] = arr[i] + x;
                break;
            }
        }
        
        bool isAlready = true;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % k != 0) {
                isAlready = false;
            }
        }
        if (isAlready) {
            break;
        } else {
            ans++;
            x++;
        }
    }
    
    return ans;
}



int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr;
        int element;
        
        bool isAlready = true;
        for (int i = 0; i < n; i++) {
            cin >> element;
            arr.push_back(element);
            
            if (arr[i] % k != 0) {
                isAlready = false;
            }
        }
        
        if (isAlready) {
            cout << "0" << "\n";
        } else {
            cout << solve(arr, k) << "\n";
        }
    }
    return 0;
}

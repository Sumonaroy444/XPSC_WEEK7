#include <bits/stdc++.h>
using namespace std;
const int B = 30; 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, kk;
        cin >> n >> kk;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> bits(B + 1); 
        for (int i = 0; i < n; i++) {
            for (int k = B; k >= 0; k--) {
                if ((a[i] >> k) & 1) {
                    bits[k]++;
                }
            }
        }
        long long ans = 0;
        for (int k = B; k >= 0; k--) {
            if (bits[k] == n) { 
                ans += (1LL << k);
            } 
            else {
                int need = n - bits[k]; 
                if (kk >= need) {
                    ans += (1LL << k);
                    kk -= need; 
                }
            }
        }
        cout << ans << endl;
    }
}


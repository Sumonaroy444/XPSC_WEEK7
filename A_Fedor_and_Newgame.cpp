#include <bits/stdc++.h>>
using namespace std;
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arr(m);
    for (int i=0;i<m;i++) {
        cin >> arr[i];
    }
    int p;
    cin>>p;
    int cnt = 0;
    for (int i=0;i<m;i++) {
        int tmp = p ^ arr[i]; //XOR diye bit koto gula difference eta dekhbo
        int tmp_cnt = 0;
        while (tmp > 0) {// loop cholte thakbe jotokhon temp man 0 theke boro
            if (tmp & 1) { // check kora hoy temp last val 1 kina 
                tmp_cnt++; // xor er por last val 1 hole cnt e 1 jog hbe
                if (tmp_cnt > k) { 
                    // count k er cheye boro hole loop break korbe 
                    break;
                }
            }
            tmp >>= 1; 
        }
        if (tmp_cnt <= k) {
            cnt++;
        }
    }
 cout << cnt << endl;
}


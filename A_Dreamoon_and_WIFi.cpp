#include <bits/stdc++.h>
using namespace std;
const long long B = 1e9; 
vector<long long>v;
void push_luck(long long num) {
    if (num > B)
        return;

    if (num > 0)
        v.push_back(num);

    push_luck(num * 10 + 4);
    push_luck(num * 10 + 7);
}
int main() {
    int n;
    cin>>n;
    push_luck(0);
    sort(v.begin(),v.end());
    for (int i = 0; i<v.size(); i++) {
        if (v[i] == n) {
            cout << i + 1 << endl; 
            return 0;
        }
    }
}


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hsh[N][26];

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        // Reset only required part
        for (int i = 0; i <= n; i++) {
            fill(hsh[i], hsh[i] + 26, 0);
        }

        // Build prefix frequency table
        for (int i = 0; i < n; i++) {
            hsh[i + 1][s[i] - 'a']++;  // Shift to 1-based index
        }
        
        // Compute prefix sum
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < 26; j++) {
                hsh[i][j] += hsh[i - 1][j]; // Add previous prefix sum
            }
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            int oddcnt = 0;

            for (int i = 0; i < 26; i++) {
                int char_count = hsh[r][i] - hsh[l - 1][i]; // Query range
                if (char_count % 2 != 0) {
                    oddcnt++;
                }
            }

            cout << (oddcnt > 1 ? "No" : "Yes") << endl;
        }
    }
}

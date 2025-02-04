#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> values(n + 1);  
    for (int i = 1; i <= n; i++) {
        cin >> values[i];
    }

    for (int i = 0; i < m; i++) {
        int s, t;
        cin >> s >> t;
        int ans = 0;

        if (s <= t) {

            for (int j = s; j < t; j++) {
                if (values[j] > values[j + 1]) {
                    ans += values[j] - values[j + 1];
                }
            }
        } else {

            for (int j = s; j > t; j--) {
                if (values[j] > values[j - 1]) {
                    ans += values[j] - values[j - 1];
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}


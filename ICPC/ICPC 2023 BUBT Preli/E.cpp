#include <iostream>
using namespace std;

static int count = 1;

void solve() {
    long long int n;
    cin >> n;
    long long int a[n];
    for (long long int i = 0; i < n; i++) cin >> a[i];

    long long int subarray = (n * (n + 1)) / 2;
    long long int same = 0;

    for (long long int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            same++;
        } else {
            same++;
            subarray -= (same * (same + 1)) / 2;
            same = 0; 
        }
    }
    same++;
    subarray -= (same * (same + 1)) / 2;

    cout << "Case " << count << ": " << subarray << endl;
    count++;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
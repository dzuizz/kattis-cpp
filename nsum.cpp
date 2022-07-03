#include <iostream>
using namespace std;
typedef long long ll;

int n;
int ans;

int main() {
    // get sum of N integers
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans += x;
    }
    cout << ans << endl;
}
#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int a[4];

    for (int i = 0; i < 4; i++) cin >> a[i];
    sort(a, a + 4);

    cout << a[0] * a[2] << '\n';
}
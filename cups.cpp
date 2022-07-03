#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<int, string> is;

#define fi first
#define se second

vector<is> v;

void mergeSort(int l, int r) {
    if (l == r) return;
    int mid = (l + r) / 2;

    mergeSort(l, mid);
    mergeSort(mid + 1, r);

    vector<is> temp;
    int i = l, j = mid + 1;
    
    while (i <= mid && j <= r) {
        if (v[i].fi < v[j].fi) temp.push_back(v[i++]);
        else temp.push_back(v[j++]);
    }
    while (i <= mid) temp.push_back(v[i++]);
    while (j <= r) temp.push_back(v[j++]);

    for (int i = l; i <= r; i++) v[i] = temp[i - l];
}

int main() {
    int n; cin >> n;

    v = vector<is>(n);

    for (int i = 0; i < n; i++) {
        string a, b; cin >> a >> b;
        if (48 <= a[0] && a[0] <= 57) v[i] = is(stoi(a), b);
        else v[i] = is(stoi(b) * 2, a);
    }

    mergeSort(0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << v[i].se << '\n';
    }
}
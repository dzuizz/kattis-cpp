#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> ull;

#define loc first
#define letters second

int main() {
    ll n, k; cin >> n >> k;

    vector<ull> neg, pos;
    for (ll i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        if (a < 0) neg.push_back(ull(a, b));
        else pos.push_back(ull(a, b));
    }

    ll xtra = 0, ans = 0;
    for (int i = 0; i < neg.size(); i++) {
        if (xtra >= neg[i].letters) xtra -= neg[i].letters;
        else {
            neg[i].letters -= xtra;
            xtra = 0;

            if (neg[i].letters % k == 0) ans += 2 * -neg[i].loc * (neg[i].letters / k);
            else {
                ans += 2 * -neg[i].loc * (neg[i].letters / k + 1);
                xtra = k - neg[i].letters % k;
            }
        }
    }

    xtra = 0;

    for (int i = pos.size() - 1; i >= 0; i--) {
        if (xtra >= pos[i].letters) xtra -= pos[i].letters;
        else {
            pos[i].letters -= xtra;
            xtra = 0;

            if (pos[i].letters % k == 0) ans += 2 * pos[i].loc * (pos[i].letters / k);
            else {
                ans += 2 * pos[i].loc * (pos[i].letters / k + 1);
                xtra = k - pos[i].letters % k;
            }
        }
    }


    cout << ans << '\n';
}

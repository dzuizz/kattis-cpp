#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        if (a == 0) break;

        if (a + b == 3) {
            if (c + d == 3) cout << "Tie.\n";
            else cout << "Player 1 wins.\n";
        } else if (a == b) {
            if (c + d == 3) cout << "Player 2 wins.\n";
            else if (c == d) {
                if (a > c) cout << "Player 1 wins.\n";
                else if (a < c) cout << "Player 2 wins.\n";
                else cout << "Tie.\n";
            }
            else cout << "Player 1 wins.\n";
        } else if (c + d == 3 || c == d) cout << "Player 2 wins.\n";
        else {
            int sc1 = 10 * max(a, b) + min(a, b), sc2 = 10 * max(c, d) + min(c, d);
            if (sc1 > sc2) cout << "Player 1 wins.\n";
            else if (sc1 < sc2) cout << "Player 2 wins.\n";
            else cout << "Tie.\n";
        }
    }
}

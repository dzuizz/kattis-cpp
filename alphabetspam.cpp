#include <iostream>
#include <iomanip>
using namespace std;
typedef long long ll;

int main() {
    string s; cin >> s;
    int wh = 0, low = 0, up = 0, oth = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '_') wh++;
        else if (97 <= s[i] && s[i] <= 122) low++;
        else if (65 <= s[i] && s[i] <= 90) up++;
        else oth++;
    }

    cout << setprecision(15) << (double) wh / s.size() << '\n';
    cout << (double) low / s.size() << '\n';
    cout << (double) up / s.size() << '\n';
    cout << (double) oth / s.size() << '\n';
}
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int a[5];

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            if (a[j - 1] > a[j]) {
                swap(a[j - 1], a[j]);
                for (int j = 0; j < 5; j++) cout << a[j] << " ";
            }
        }

        cout << '\n';
    }
}
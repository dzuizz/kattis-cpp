#include <iostream>
using namespace std;

int main(){
    int n, ans=1;
    cin >> n;
    for(int i=0;i<n;i++){
        ans *= 2;
    }
    ans++;
    ans *= ans;
    cout << ans;
}
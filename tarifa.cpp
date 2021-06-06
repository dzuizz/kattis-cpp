#include <iostream>
using namespace std;

int main(){
    int m, x, n, result=0;
    cin >> x >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        result += x - m;
    }
    cout << result + x << endl;
}
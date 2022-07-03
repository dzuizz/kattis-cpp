#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double ans=1, factorial=1;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        factorial *= i;
        ans += 1/factorial;
    }
    printf("%.16lf", ans);
}
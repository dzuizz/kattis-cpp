#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, a, j=0, won=0;
    cin >> n >> a;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    while(won<n && a>arr[j]){
        a = a-arr[j]-1;
        j++;
        won++;
    }
    cout << won << endl;
}
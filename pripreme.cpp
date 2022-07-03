#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long n, time=0;
    cin >> n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        time += arr[i];
    }
    sort(arr, arr+n, greater<long long>());
    if(arr[0]>time-arr[0]){
        time = 2*arr[0];
    }
    cout << time << endl;
}
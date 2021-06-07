#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, result=0;
    cin >> n;
    vector<int> v;
    if(n%2==0){
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i=1;i<v.size();i+=2){
            result += v[i]-v[i-1];
        }
        cout << result << endl;
    } else {
        cout << "still running\n";
    }
}
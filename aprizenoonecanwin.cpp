#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, x, e;
    vector<int> prices;
    cin >> n >> x;
    for(int i=0;i<n;i++){
        cin >> e;
        prices.push_back(e);
    }
    sort(prices.begin(), prices.end(), greater<int>());
    while(prices.size()>1 && prices[0]+prices[1]>x){
        prices.erase(prices.begin());
    }
    cout << prices.size() << endl;
}
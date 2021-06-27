#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, godzilla, mgodzilla;
    cin >> t;
    for(int test=0;test<t;test++){
        cin >> godzilla >> mgodzilla;
        int army_g[godzilla], army_mg[mgodzilla];
        for(int i=0;i<godzilla;i++){
            cin >> army_g[i];
        }
        for(int i=0;i<mgodzilla;i++){
            cin >> army_mg[i];
        }
    }
}
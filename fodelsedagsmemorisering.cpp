#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<string, string> date_name; // <date, name>
    map<string, int> date_pt; // <date, pt>
    int a;
    cin >> a;
    for(int g=0;g<a;g++){
        string name, date;
        int pt;
        cin >> name >> pt >> date;
        if (date_pt.find(date) != date_pt.end()){
            if (pt > date_pt[date]){
                date_pt[date] = pt;
                date_name[date] = name;
            }
        } else {
            date_pt[date] = pt;
            date_name[date] = name;
        }
    }
    vector<string> v;
    for(map<string, string>::iterator k = date_name.begin();k != date_name.end();k++){
        v.push_back(k->second);
    }
    sort(v.begin(), v.end());
    cout << v.size() << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
}

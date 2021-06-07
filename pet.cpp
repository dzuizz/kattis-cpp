#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{
    int cur_h=-1, participant;
    for (int i = 1; i <= 5; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if((a+b+c+d)>cur_h){
            cur_h = a+b+c+d;
            participant = i;
        }
    }
    cout << participant << " " << cur_h << endl;
}
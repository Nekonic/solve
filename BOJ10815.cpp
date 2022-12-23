#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    unordered_map<int,bool> map;
    cin >> n;
    while (n--){
        cin >> m;
        map.insert({m,true});
    }cin >> n;
    while (n--){
        cin >> m;
        if(map.find(m)!=map.end())cout << "1 ";
        else cout << "0 ";
    }
}
#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,x;
    cin >> n;
    map<int, int> hash1;
    for(int i=0; i<n; i++){
        cin >> x;
        if(hash1.find(x) != hash1.end()){
            hash1.insert({x, ++hash1[x]});
        }
        else hash1.insert({x, 1});
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        if(hash1.find(x) != hash1.end()){
            cout << hash1[x] << " ";
        }else cout << "0 ";
    }
}
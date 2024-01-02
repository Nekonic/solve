#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool cmp(pair<string, int>& a, pair<string, int>& b){
    return a.second < b.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,cnt=0;
    string x;
    unordered_map<string, int> a;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        if(a.find(x)!=a.end()){
            a.erase(x);
            a.insert({x,i});
        }else{
            a.insert({x,i});
        }
    }vector<pair<string, int>> v(a.begin(), a.end());
    sort(v.begin(), v.end(), cmp);
    for(auto i : v){
        if(cnt==n)break;
        cnt++;
        cout << i.first << '\n';
    }
}
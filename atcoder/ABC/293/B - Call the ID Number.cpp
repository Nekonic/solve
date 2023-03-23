#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;
int main(){
    int n,m;
    bool check[1000001]={0};
    vector<int> a;
    unordered_map<int,bool> call;
    set<int> x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
    }for(int i=0; i<n; i++){
        if(call.find(i+1)!=call.end())continue;
        else{
            call.insert(make_pair(a[i],true));
            check[a[i]]=true;
        }
    }for(int i=1; i<=n; i++){
        if(!check[i])x.insert(i);
    }cout << x.size() << '\n';
    for(auto i : x)cout << i << ' ';
}
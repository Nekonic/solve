#include <iostream>
#include <set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<int> a;
    int n,m,x;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
        a.insert(x);
    }while(m--){
        cin >> x;
        if(a.find(x)!=a.end())a.erase(x);
    }cout << a.size() << '\n';
    if(a.size()!=0)for (auto i : a) cout << i << " ";
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct m
{
    string mento,menti;
};
bool cmp(const m & a, const m & b){
    if(a.mento<b.mento)return true;
    else if(a.mento==b.mento){
        if(a.menti>b.menti)return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    m str;
    vector<m> a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str.mento >> str.menti;
        a.push_back(str);
    }sort(a.begin(),a.end(),cmp);
    for(int i=0; i<n; i++){
        cout << a[i].mento << ' ' << a[i].menti << '\n';
    }
}
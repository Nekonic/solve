#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct x {
    int num;
    char name[11];
};
bool cmp1(const x& a, const x& b) {
    if (a.num < b.num)return true;
    return false;
}
vector<x> a;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    x data1;
    int n;
    char code;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m=-1;
        cin >> code;
        cin >> data1.num;
        cin >> data1.name;
        for(int i=0; i<a.size(); i++){
                if(a[i].num==data1.num)m=i;
            }
        if (code == 'I'){
            a.push_back(data1);
        }
        else if (code == 'D'&&m!=-1) {
            a.erase(a.begin()+m);
        }
    }
    sort(a.begin(), a.end(), cmp1);
    for (int i = 0; i < 5; i++) {
        cin >> n;
        cout << a[n-1].num << " " << a[n-1].name << "\n";
    }
}
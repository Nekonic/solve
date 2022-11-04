#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> a;
    int s,k,q,r;
    unsigned long long result=1;
    cin >> s >> k;
    q=s/k;
    r=s%k;
    for(int i=0; i<k; i++){
        a.push_back(q);
    }for(int i=0; i<r; i++){
        a[i]++;
    }for(int i=0; i<a.size(); i++){
        result*=a[i];
    }cout << result;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum=0, m[100]={0};
    vector<int> a;
    for(int i=0; i<10; i++){
        cin >> n;
        sum+=n;
        a.push_back(n);
        m[n/10]++;
    }
    cout << sum/10 << "\n";
    sort(a.begin(), a.end());
    int x=0,idx=0;
    for(int i=0; i<100; i++){
        if(m[i]>x){
            x=m[i];
            idx=i;
        }
    }
    cout << idx*10;
}
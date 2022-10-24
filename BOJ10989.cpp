#include <iostream>
using namespace std;
#define MAX_DATA_VALUE 10001
int cnt[MAX_DATA_VALUE]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        cnt[m]++;
    }
    for(int i = 1; i <= 10000; i++){
        if (cnt[i] != 10001){
            for (int j = 1; j <= cnt[i]; j++){
                cout << i << "\n";
            }
        }
    }
}
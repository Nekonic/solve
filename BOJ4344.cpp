#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int m,sum=0,cnt=0;
        cin >> m;
        int a[m];
        for(int j=0; j<m; j++){
            cin >> a[j];
            sum+=a[j];
        }
        for(int j=0; j<m; j++){
            if(sum/m<a[j])cnt++;
        }
        cout << fixed;
        cout.precision(3);
        cout << (double)cnt/m*100 << "%\n";
    }
}
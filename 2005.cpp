#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,x,a[150];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            x=a[i]>a[j]?a[i]-a[j]:a[j]-a[i];
            if(x%m==0){
                cout << "no";
                return 0;
            }
        }
    }
    cout << "yes";
}
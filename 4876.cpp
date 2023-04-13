#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        int ar[4]={},br[4]={};
        for(int j=0; j<m; j++){
            cin >> x;
            ar[x-1]++;
        }cin >> m;
        for(int j=0; j<m; j++){
            cin >> x;
            br[x-1]++;
        }if(ar[3]!=br[3]){
            if(ar[3]>br[3])cout << 'A';
            else cout << 'B';
        }else if(ar[2]!=br[2]){
            if(ar[2]>br[2])cout << 'A';
            else cout << 'B';
        }else if(ar[1]!=br[1]){
            if(ar[1]>br[1])cout << 'A';
            else cout << 'B';
        }else if(ar[0]!=br[0]){
            if(ar[0]>br[0])cout << 'A';
            else cout << 'B';
        }else cout << 'D';
        cout << '\n';
    }
}
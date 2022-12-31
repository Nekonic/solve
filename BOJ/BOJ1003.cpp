#include <iostream>
#include <vector>
using namespace std;
vector<long long> memo(41, -1);
int fibonacci(int n) {
    if (n == 0) {
        memo[0]=0;
        return 0;
    } else if (n == 1) {
        memo[1]=1;
        return 1;
    } if(memo[n]!=-1)return memo[n];
    else {
        return memo[n]=fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T,n;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> n;
        if(n==0){
            cout << "1 0\n";
            continue;
        } else if(n==1){
            cout << "0 1\n";
            continue;
        }
        fibonacci(n);
        cout << memo[n-1] << " " << memo[n] << "\n";
    }
}
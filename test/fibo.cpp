#include <iostream>
#include <vector>
using namespace std;
#define P 1000000007;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long fi1=1,fi2=1,fi3,temp;
    if(n==1||n==2){
        cout << "1";
        return 0;
    }
    for(int i=2; i<n; i++){
        fi3=(fi1+fi2)%P;
        fi1=fi2;
        fi2=fi3;
    }
    cout << fi3;
}
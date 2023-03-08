#include <iostream>
using namespace std;
int prime[10000009];
int fac[10000009];
int minfac[10000009];
void eratos(){
    for(int i=1; i<=10000000; i++)prime[i]=i;
    for(int i=2; i <= 10000000; i++){
		if (prime[i]==i)
			for (int j = 2; j*i <= 10000000; j++)
			    if (prime[i*j] == i*j) prime[i*j] = i;
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    eratos();
    int n,m,v,x,k;
    fac[1] = 1;
	for (int i = 2; i <= 10000000; i++) {
		if (prime[i] == i) {
			fac[i] = 2;
            		minfac[i] = 1;
		}
		else {
			int p = prime[i];
			int _m = i / p;
			if (p != prime[_m]) {
				minfac[i] = 1;
			}
			else {
				minfac[i] = minfac[_m] + 1;
			}
			int a = minfac[i];
			fac[i] = (fac[_m] / a)*(a + 1);
		}
	}cin >> n >> m;
    for(int t=0; t<n; t++){
        cin >> v;
        cout << fac[v]+m/v-1 << '\n';
    }
}
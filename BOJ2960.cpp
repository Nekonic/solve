#include <iostream>
using namespace std;
int Eratos(int n, int k){
    int x=0,f=0;
	int PrimeArray[1001] = {};
	for (int i = 2; i <= n; i++)
	{
		if (!PrimeArray[i]){
            for (int j = i; j <= n; j +=i){
                if(PrimeArray[j])continue;
                PrimeArray[j]++;
                x++;
                if(x==k)return j;
            }
        }
	}
    cout << "x";
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin >> n >> k;
    cout << Eratos(n, k);
}
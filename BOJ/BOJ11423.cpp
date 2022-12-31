#include <iostream>
#include <cstring>
using namespace std;
bool PrimeArray[10000001];
int sum[10000001]={};
void Eratos(){
    memset(PrimeArray, true, 10000001);
	for (int i = 2; i * i <= 10000000; i++)
	{
		if(PrimeArray[i])
            for (int j = i * i; j <= 10000000; j += i)
			    PrimeArray[j] = false;
	}for(int i=2;i<=10000000;i++){
        if (PrimeArray[i])sum[i] = sum[i - 1] + 1;
        else sum[i] = sum[i - 1];
    }
}
int main(){
    Eratos();
    int m, n;
    while (cin >> m >> n) {
        cout << sum[n] - sum[m - 1] << "\n\n";
    }
}
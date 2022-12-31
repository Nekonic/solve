#include <stdio.h>
using namespace std;
void Eratos(int n,int a){
    if (n <= 1) return;
	bool* PrimeArray = new bool[n + 1];
	for (int i = 2; i <= n; i++)
	    PrimeArray[i] = true;
	for (int i = 2; i * i <= n; i++)
	{
		if (PrimeArray[i])
			for (int j = i * i; j <= n; j += i)
			    PrimeArray[j] = false;
	}
    for(int i=a;i<=n;i++){
        if(PrimeArray[i])printf("%d ",i);
    }
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    Eratos(m,n);
}
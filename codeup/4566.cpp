#include <stdio.h>
void Eratos(int n,int a){
    if (n <= 1) return;
    int min=10000;
	bool* PrimeArray = new bool[n + 1];
	for (int i = 2; i <= n; i++)
	    PrimeArray[i] = true;
	for (int i = 2; i * i <= n; i++)
	{
		if (PrimeArray[i])
			for (int j = i * i; j <= n; j += i)
			    PrimeArray[j] = false;
	}
    int sum=0;
    for(int i=a;i<=n;i++){
        if(PrimeArray[i]){
            sum+=i;
            if(min>i)min=i;
        }
    }
    printf("%d\n%d",sum,min);
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    Eratos(m,n);
}
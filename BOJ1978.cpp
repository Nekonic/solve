#include <stdio.h>
using namespace std;
int main(){
    bool* PrimeArray = new bool[1000 + 1];
	for (int i = 2; i <=1000; i++)
	    PrimeArray[i] = true;
	for (int i = 2; i * i <= 1000; i++)
	{
		if (PrimeArray[i])
			for (int j = i * i; j <= 1000; j += i)
			    PrimeArray[j] = false;
	}
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int a;
        scanf("%d",&a);
        if(a!=1 && PrimeArray[a])cnt++;
    }
    printf("%d",cnt);
}
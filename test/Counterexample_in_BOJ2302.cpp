#include<bits/stdc++.h>
using namespace std;
int	N,M,resultarr1,resultarr2;
vector<int> v;
void example(void)
{
    v=vector<int>();
	N = rand()%39+1;
    M = rand()%(N-1)+1;
    for(int i=0; i<M; i++){
        v.emplace_back(rand()%(N-1)+1);
    }
    sort(v.begin(),v.end());
}

void incorrect(int n,int m)
{
    int VIP[44]={},D[44][44]={};
    for (int i:v)
    {
        int tmp=i;
        VIP[tmp] = 1;
    }D[1][0] = 0;
    D[1][1] = 1;
    for (int i = 2; i <= N; ++i)
    {
        if (VIP[i] == 1 || VIP[i - 1] == 1)D[i][i - 1] = 0;
        else D[i][i - 1] = D[i - 1][i - 1];
        D[i][i] = D[i - 1][i - 1] + D[i - 1][i - 2];
    }
    resultarr1=D[N][N] + D[N][N-1];
	return;
}

void correct(int n,int m)
{
    int ans=1,t=1,x;
    for(int i=0; i<m; i++){
        x=v[i];
        if(x-t>0)ans*=x-t;
        t=x+1;
    }
    if(n-t+1)ans*=n-t+1;
    resultarr2=ans;
    return;
}

int	main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	example();
	correct(N,M);
	incorrect(N,M);
	while (resultarr1==resultarr2){
        main();
    }
	cout << "ex : N = " << N << " M = " << M;
	cout << "\n";
	for(int i:v)
	{
		cout << i << " ";
	}
	cout << "\nans : " << resultarr1;
	cout << "\nout : " << resultarr2;
    cout << "\n";
	return 0;
}
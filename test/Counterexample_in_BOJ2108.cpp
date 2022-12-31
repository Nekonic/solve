#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;
#define MAX_DATA_VALUE 8001
int cnt[MAX_DATA_VALUE]={};
int	K, exarr[500000]={},resultarr1[4],resultarr2[4];

void example(void)
{
	K = rand()%500000;
}

void incorrect(int K)
{
	int coordinate[500001];
    int cnt[8001];
    int N, a, b, c, d;
    int sum = 0;
    N=K;

	for (int i = 0; i < N; i++)
	{
		coordinate[i]=exarr[i];
		sum += coordinate[i];
		cnt[coordinate[i]+4000]++;
	}
	
	sort(coordinate, coordinate + N);
	
	int flag;
	int max = 0;
	
	for (int i = 0; i < 8001; i++)
	{
		if (cnt[i] > max)
		{
			max = cnt[i];
			flag = i;
		}
	}

	for (int i = flag + 1; i < 8001; i++)
	{
		if (cnt[i] == max)
		{
			flag = i;
			break;
		}
	}

	a = round(double(sum) / N);
	b = coordinate[(N - 1) / 2];
	c = flag - 4000;
	d = coordinate[N - 1] - coordinate[0];
    resultarr1[0]=a;
    resultarr1[1]=b;
    resultarr1[2]=c;
    resultarr1[3]=d;
	return;
}

void correct(int K)
{
    double sum=0;
    int n,m,maxvel=-4000,minvel=4000;
    n=K;
    vector<int> a;
    for(int i=0; i<n; i++){
        m=exarr[i];
        a.push_back(m);
        sum+=m;
        if(maxvel<m)maxvel=m;
        if(minvel>m)minvel=m;
        cnt[m+4000]++;
    }
    sum/=n;
    if(sum<0)sum-=0.5;
	else sum+=0.5;
    //최빈값
    //중앙값
    int k=0,vel=0,idx=0,result;
    for(int i = 0; i <= 8000; i++){
        if (cnt[i] != 0){
            for (int j = 1; j <= cnt[i]; j++){
                k++;
                if(k==n/2+1)result=i-4000;
            }
        }
        if(cnt[i] > vel){
            vel = cnt[i];
            idx = i;
        }
    }
    for(int i=idx+1; i<=8000; i++){
        if(cnt[i]==vel){
            idx=i;
            break;
        }
    }
    resultarr2[0]=(int)sum;
    resultarr2[1]=result;
    resultarr2[2]=idx-4000;
    resultarr2[3]=maxvel-minvel;
    return;
}

int	main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	example();

	for(int i=0; i<K; i++){
        exarr[i]=rand()%4000;
    }
	correct(K);
	incorrect(K);
	while (equal(resultarr1,resultarr1+4,resultarr2)){
        main();
    }
	cout << "예제: K = " << K;
	cout << "\nlines: ";
	for(int i = 0; i < K; i++)
	{
		cout << exarr[i] << " ";
	}
	cout << "\n맞은 답: ";
    for(int i=0; i<4; i++){
        cout << resultarr1[i] << " ";
    }
	cout << "\n틀린 답: ";
    for(int i=0; i<4; i++){
        cout << resultarr2[i] << " ";
    }
	return 0;
}
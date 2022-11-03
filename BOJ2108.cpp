#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define MAX_DATA_VALUE 8001
int cnt[MAX_DATA_VALUE]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double sum=0;
    int n,m,maxvel=-4000,minvel=4000;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
        sum+=m;
        if(maxvel<m)maxvel=m;
        if(minvel>m)minvel=m;
        cnt[m+4000]++;
    }
    sum/=n;
    if(sum<0)sum-=0.5;
	else sum+=0.5;
    cout << (int)sum << "\n";
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
    cout << result << "\n" << idx-4000 << "\n" << maxvel-minvel;
}
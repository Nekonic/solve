#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <utility>
#include <cmath>
#include <cassert>
#include <functional>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef vector<pair<int,int> > vii;
typedef vector<pair<ll,int> > vli;
typedef vector<pair<ll,ll> > vll;
typedef vector<pair<db,db> > vdd;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define mp make_pair
#define pb(x) push_back(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()

const ll MOD = 1000000007;
const int INF = 0x3f3f3f3f;
const ll LLINF = 1e18;
const db PI = acos(-1);

bool prime[5000001];
bool malhansu[5000001];
set<int> daewoong, gyusung;

int main(){

    std::ios::sync_with_stdio(false);

    memset(prime,1,sizeof(prime));

    prime[0]=prime[1]=false;
    db kk = sqrt(5000000);
    for(int i=2;i<=kk;i++){
        if(prime[i]){
            for(int j=i*i;j<=5000000;j+=i)
                prime[j]=false;
        }
    }

    int n;
    scanf("%d",&n);

    int a,b;
    ll d_score=0,g_score=0;
    set<int>::iterator it;
    while(n--){
        cout << d_score << " " << g_score << "\n";
        scanf("%d %d",&a,&b);

        // 소수 아닌 수.
        if(!prime[a]){
            if(gyusung.size()<3) g_score+=1000;
            else{
                it = gyusung.end();
                it--;it--;it--;
                g_score += *it;
            }
        }else{
            if(malhansu[a]){
                d_score-=1000;    
            }else{
                malhansu[a]=true;
                daewoong.insert(a);
            }
        }
        if(!prime[b]){
            if(daewoong.size()<3) d_score+=1000;
            else{
                it = daewoong.end();
                it--;it--;it--;
                d_score += *it;
            }
        }else{
            if(malhansu[b]){
                g_score-=1000;
            }else{
                malhansu[b]=true;
                gyusung.insert(b);
            }
        }
    }cout << d_score << " " << g_score << "\n";
    if(g_score<d_score){
        printf("소수의 신 갓대웅");
    }else if(g_score>d_score){
        printf("소수 마스터 갓규성");
    }else printf("우열을 가릴 수 없음");

    return 0;
}
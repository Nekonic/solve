#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <iostream>
using namespace std;
bool isPrime(int n){
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int n;
long long a,b,cnt1=0,cnt2=0;
map<int,bool> abprimes;
set<int, greater<int>> aprime,bprime;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int t=0; t<n; t++){
        cin >> a >> b;
        set<int, greater<int>>::iterator iter = aprime.begin();
        //규칙2
        if(!isPrime(a)){
            //cout << a << " is not prime\n";
            if(bprime.size()<3)cnt2+=1000;
            else{
                int cntx=1;
                for (auto i : bprime){
                    if(cntx==3){
                        cnt2 += i;
                        break;
                    }cntx++;
                }
            }
        }
        else {
            if(abprimes.find(a)!=abprimes.end())cnt1-=1000;
            else{
                //cout << a << " is not find\n";
                aprime.insert(a);
                abprimes.insert({a, true});
            }
        }
        if(!isPrime(b)){
            if(aprime.size()<3)cnt1+=1000;
            else{
                int cntx=1;
                for (auto i : aprime){
                    if(cntx==3){
                        cnt1 += i;
                        break;
                    }cntx++;
                }
            }
        }else{
            if(abprimes.find(b)!=abprimes.end())cnt2-=1000;
            else{
                //cout << b << " is not find\n";
                bprime.insert(b);
                abprimes.insert({b, true});
            }
        }
    }
    if(cnt1==cnt2)cout << "우열을 가릴 수 없음";
    else if(cnt1>cnt2)cout << "소수의 신 갓대웅";
    else cout << "소수 마스터 갓규성";
}
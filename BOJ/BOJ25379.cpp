#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    unsigned long long a,cnt1=0,cnt2=0,x=0,sum=0;
    for(long i=0; i<n; i++){
        cin >> a;
        if(a%2==0){
            sum+=x++;
            cnt1+=i;
            cnt2+=n-1-i;
        }
    }
    cout << min(cnt1,cnt2)-sum;
}
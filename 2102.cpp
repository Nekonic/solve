#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m;
    cin >> m;
    unsigned long long x;
    string s;
    for(int i=1; m*i<ULLONG_MAX; i++){
        x=m*i;
        s=to_string(x);
        int cnt=0;
        for(int j=0; j<s.length(); j++){
            if(s[0]=='1'&&s[j]=='0'||s[j]=='1'){
                cnt++;
            }
        }
        if(cnt==s.length()){
            cout << x;
            return 0;
        }
    }
    cout << "0";
}
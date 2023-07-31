#include <bits/stdc++.h>
using namespace std;
string a,b,ans;
void res(){
    int la=a.size(),lb=b.size();
    for(int i=0; i<la; i++){
        ans+=a[i];
        if(ans.back()==b.back()&&ans.size()>=lb){
            bool flag=1;
            for(int j=0; j<lb; j++){
                if(ans[ans.size()-lb+j]!=b[j]){
                    flag=0;
                    break;
                }
            }if(flag)ans.erase(ans.end()-lb,ans.end());
        }
    }if(ans.empty())cout << "FRULA";
    else cout << ans;
}
int main(){
    cin >> a >> b;
    res();
}
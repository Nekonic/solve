#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,cnt=1;
    bool back=false;
    string str,s[3]={"CLOCK","WATCH","HOURGLASS"};
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> str >> m;
        if(cnt>12)cnt=1;
        if(cnt<1)cnt=12;
        if(str==s[2]&&cnt!=m)back=!back;
        if(cnt==m&&str!=s[2])cout << m << " YES\n";
        else cout << cnt <<" NO\n";
        if(back)cnt--;
        else cnt++;
    }
}
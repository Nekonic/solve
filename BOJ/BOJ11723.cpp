#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x,set=0;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        if(s=="add"){
            cin >> x;
            set=set|(1<<x-1);
        }else if(s=="remove"){
            cin >> x;
            set=set&(~(1<<x-1));
        }else if(s=="check"){
            cin >> x;
            if((set&(1<<x-1))==(1<<x-1))cout << "1\n";
            else cout << "0\n";
        }else if(s=="toggle"){
            cin >> x;
            if(set&(1<<x-1)==1)set-=(1<<x-1);
            else set+=(1<<x-1);
        }else if(s=="all")set=(1<<21)-1;
        else set=0;
    }
}
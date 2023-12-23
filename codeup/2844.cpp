#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<string, int> m;
    vector<string> v;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(!x){
            for(auto&i : v){
                if(m[i]>0)cout << i << ' ' << m[i] << '\n';
            }
            continue;
        }if(x!=1&&x!=2){
            cout << "wrong command!\n";
            continue;
        }
        string str;
        cin.ignore();
        getline(cin,str);
        if(x==1){
            m[str]++;
            if(find(v.begin(),v.end(),str)==v.end())v.push_back(str);
        }else if(x==2){
            if(m[str]<1)cout << "no book!\n";
            else{
                m[str]--;
                auto it = find(v.begin(),v.end(),str);
                if(it!=v.end()&&m[str]<1)v.erase(it);
            }
        }
    }
}
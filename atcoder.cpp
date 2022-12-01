#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<string> s,t;
    int n,m;
    if(scanf("%d%d",&n,&m)){};
    for(int i=0; i<n; i++){
        string str;
        if(scanf("%s",str)){};
        s.push_back(str);
    }for(int i=0; i<n; i++){
        string str;
        if(scanf("%s",str)){};
        t.push_back(str);
    }
    printf(t==s?"No":"Yes");
    return 0;
}
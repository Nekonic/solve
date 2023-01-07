#include <iostream>
using namespace std;
int main(){
    string a,b;
    int n;
    cin >> a >> n;
    while(n--){
        int scnt=0,bcnt=0;
        cin >> b;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(a[i]==b[j]){
                    if(i==j)scnt++;
                    else bcnt++;
                }
            }
        }if(scnt==0&&bcnt==0)cout << "OUT\n";
        else if(scnt==3){
            cout<<"3S\nSUCCESS";
            return 0;
        }
        else if(scnt>0&&bcnt==0)cout<<scnt<<"S\n";
        else if(scnt==0&&bcnt>0)cout<<bcnt<<"B\n";
        else cout<<scnt<<'S'<<bcnt<<"B\n";
    }cout<<"FAIL";
}
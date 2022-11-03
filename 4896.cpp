#include <iostream>
using namespace std;
struct box
{
    int x1,y1,x2,y2;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    box b1, b2;
    cin >> b1.x1 >> b1.y1 >> b1.x2 >> b1.y2;
    cin >> b2.x1 >> b2.y1 >> b2.x2 >> b2.y2;
    int cnt=(b1.x2==b2.x1)+(b1.x1==b2.x2)+(b1.y1==b2.y2)+(b1.y2==b2.y1);
    if(b1.x2<b2.x1||b1.y2<b2.y1||b2.x2<b1.x1||b2.y2<b1.y1)cout << "NULL";
    else if(cnt==1)cout << "LINE";
    else if(cnt==2)cout << "POINT";
    else cout << "FACE";
}
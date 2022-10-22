#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct p{
    int x,y;
};

bool cmp(const p &a, const p &b){
    if(a.y<b.y)return true;
    else if(a.y==b.y){
        if(a.x<b.x)return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    p p1;
    vector<p> point;
    cin >> n;
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        p1.x = x;
        p1.y = y;
        point.push_back(p1);
    }
    sort(point.begin(), point.end(), cmp);
    for(int i=0; i<n; i++){
        cout << point[i].x << " " << point[i].y << "\n";
    }
    return 0;
}
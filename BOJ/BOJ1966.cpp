#include <iostream>
#include <deque>
#include <queue>
using namespace std;
struct x{
    int num, index;
};
int main(){
    int tc,n,m;
    x data1;
    cin >> tc;
    while (tc--){
        priority_queue<int> pq;
        deque<x> q;
        cin >> n >> m;
        for(int i=0; i<n; i++){
            cin >> data1.num;
            data1.index=i;
            pq.push(data1.num);
            q.push_back(data1);
        }int cnt=0;
        while (!q.empty()){
            data1=q.front();
            q.pop_front();
            if(pq.top()==data1.num){
                pq.pop();
                cnt++;
                if(m==data1.index){
                    cout << cnt << '\n';
                    break;
                }
            }else q.push_back(data1);
        }
    }
}
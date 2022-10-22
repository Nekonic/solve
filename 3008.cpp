#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> n(9),a(9, 0);
    for(int i=0; i<9; i++){
        scanf("%d", &n[i]);
    }
    //조합 전체탐색
    for(int bit=0; bit<(1<<9); bit++){
        int sum=0,cnt=0;//부분집합에 포함된 요소의 합, 요소의 개수
        a={0,0,0,0,0,0,0,0,0};//7난쟁이가 있는 배열 초기화
        for(int i=0; i<9; i++){
            //i 번째 요소 n[i]가 부분집합에 포함되는 경우
            if(bit & (1<<i)){
                sum+=n[i];
                a[i]=n[i];
                cnt++;
            }
        }
        //부분집합에 포함된 요소의 합이 100이 넘어가지 않고, 요소의 개수가 7인 경우
        if(sum < 100 && cnt==7)break;
    }
    //a(9)에서 요소 2개는 0이므로 정렬을 하면 앞으로 가기 때문에 a[2]부터 출력
    sort(a.begin(), a.end());
    for(int i=2; i<9; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}

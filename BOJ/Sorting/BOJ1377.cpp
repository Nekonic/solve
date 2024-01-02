#include <stdio.h>
#include <algorithm>
#include <vector>
#define max(a, b) a > b ? a : b
using namespace std;
struct x{
    int num,idx;
};
bool compare(const x& a,const x& b){
    return a.num < b.num;
}
int main()
{
    int N;
    scanf("%d", &N);
    x s1;
    vector<x> A;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &s1.num);
        s1.idx=i;
        A.push_back(s1);
    }
    stable_sort(A.begin(), A.end(), compare);
    int result = 0;
    for (int i = 0; i < N; i++)
        result = max(result, A[i].idx - i);
    printf("%d", result + 1);
}
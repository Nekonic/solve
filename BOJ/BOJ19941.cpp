#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,sum=0;
    vector<int> arr;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        c=c=='H'?1:9;
        arr.push_back(c);
    }for(int i=0; i<n; i++){
        for(int j=i-k; j<i+k+1; j++){
            j=j<0?0:j;
            if(j>=n)break;
            if(arr[i]!=arr[j]&&i!=j&&arr[i]!=0&&arr[j]!=0){
                arr[i]=0;
                arr[j]=0;
                sum++;
                break;
            }
        }
    }cout << sum;
}
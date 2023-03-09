#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> arr;
int power(int a, int p){
    int n,sum=0;
    while (a){
        sum+=pow(a%10,p);
        a/=10;
    }return sum;
}
int A,P;
int main(){
    cin >> A >> P;
    auto it = find(arr.begin(),arr.end(),power(A,P));
    while(it==arr.end()){
        arr.push_back(A);
        A=arr.back();
        A=power(A,P);
        it = find(arr.begin(),arr.end(),A);
    }cout << it-arr.begin();
}
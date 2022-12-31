#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct x
{
    int age;
    string name;
};
bool cmp(const x &a, const x &b){
    if(a.age<b.age)return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    x temp;
    vector<x> arr;
    for(int i=0; i<n; i++){
        cin >> temp.age >> temp.name;
        arr.push_back(temp);
    }
    stable_sort(arr.begin(), arr.end(), cmp);
    for(int i=0; i<n; i++){
        cout << arr[i].age << " " << arr[i].name << "\n";
    }
}